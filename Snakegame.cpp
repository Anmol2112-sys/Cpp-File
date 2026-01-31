// Snake (Windows console) - single file
// Controls: Arrow keys to move, ESC to quit
// Compile: g++ -O2 -std=c++17 snake.cpp -o snake

#include <iostream>
#include <vector>
#include <deque>
#include <conio.h>     // _kbhit, _getch (Windows)
#include <windows.h>   // Sleep, SetConsoleCursorPosition
#include <cstdlib>
#include <ctime>

using namespace std;

struct Point {
    int x, y;
};

enum Dir { UP, DOWN, LEFT, RIGHT };

class SnakeGame {
public:
    SnakeGame(int w, int h)
        : width(w), height(h), score(0), gameOver(false),
          dir(RIGHT), tickMs(120), grow(0)
    {
        srand((unsigned)time(nullptr));
        initBoard();
        spawnFood();
    }

    void run() {
        hideCursor();
        while (!gameOver) {
            handleInput();
            update();
            draw();
            Sleep(tickMs);
        }
        showGameOver();
        showCursor();
    }

private:
    const int width, height;
    int score;
    bool gameOver;
    Dir dir;
    int tickMs; // lower = faster
    int grow;   // segments to add

    deque<Point> snake; // front = head
    Point food;

    void initBoard() {
        snake.clear();
        // Start snake centered
        int cx = width / 2;
        int cy = height / 2;
        snake.push_front({cx, cy});
        snake.push_back({cx - 1, cy});
        snake.push_back({cx - 2, cy});
    }

    void spawnFood() {
        while (true) {
            int fx = 1 + rand() % (width - 2);
            int fy = 1 + rand() % (height - 2);
            bool onSnake = false;
            for (auto &p : snake) {
                if (p.x == fx && p.y == fy) { onSnake = true; break; }
            }
            if (!onSnake) { food = {fx, fy}; return; }
        }
    }

    void handleInput() {
        // Non-blocking key check
        if (_kbhit()) {
            int c = _getch();
            // Arrow keys come as 224 then code
            if (c == 224) {
                c = _getch();
                if (c == 72 && dir != DOWN)  dir = UP;    // Up
                else if (c == 80 && dir != UP)   dir = DOWN;  // Down
                else if (c == 75 && dir != RIGHT) dir = LEFT;  // Left
                else if (c == 77 && dir != LEFT)  dir = RIGHT; // Right
            } else if (c == 27) { // ESC
                gameOver = true;
            }
        }
    }

    void update() {
        // Compute next head
        Point head = snake.front();
        switch (dir) {
            case UP:    head.y--; break;
            case DOWN:  head.y++; break;
            case LEFT:  head.x--; break;
            case RIGHT: head.x++; break;
        }

        // Collision with border
        if (head.x <= 0 || head.x >= width - 1 || head.y <= 0 || head.y >= height - 1) {
            gameOver = true;
            return;
        }

        // Collision with self
        for (auto &p : snake) {
            if (p.x == head.x && p.y == head.y) {
                gameOver = true;
                return;
            }
        }

        // Move head
        snake.push_front(head);

        // Food check
        if (head.x == food.x && head.y == food.y) {
            score += 10;
            grow += 2;                 // add 2 segments per food
            if (tickMs > 60) tickMs -= 3; // speed up a bit
            spawnFood();
        }

        // Handle growth / tail removal
        if (grow > 0) {
            grow--;
        } else {
            snake.pop_back();
        }
    }

    void draw() {
        // Move cursor to top-left, avoid flicker
        setCursorPos(0, 0);

        // Top border
        for (int x = 0; x < width; ++x) cout << '#';
        cout << '\n';

        // Middle rows
        for (int y = 1; y < height - 1; ++y) {
            cout << '#';
            for (int x = 1; x < width - 1; ++x) {
                if (x == food.x && y == food.y) {
                    cout << 'O'; // food
                } else {
                    bool printed = false;
                    for (size_t i = 0; i < snake.size(); ++i) {
                        if (snake[i].x == x && snake[i].y == y) {
                            cout << (i == 0 ? '@' : 'o'); // head vs body
                            printed = true;
                            break;
                        }
                    }
                    if (!printed) cout << ' ';
                }
            }
            cout << '#';
            cout << '\n';
        }

        // Bottom border
        for (int x = 0; x < width; ++x) cout << '#';
        cout << '\n';

        cout << "Score: " << score << "   Speed(ms): " << tickMs << "   Controls: Arrow keys | ESC to quit\n";
    }

    // Console helpers
    void setCursorPos(short x, short y) {
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD coord = {x, y};
        SetConsoleCursorPosition(hOut, coord);
    }

    void hideCursor() {
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO cci;
        cci.dwSize = 25;
        cci.bVisible = FALSE;
        SetConsoleCursorInfo(hOut, &cci);
    }

    void showCursor() {
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO cci;
        cci.dwSize = 25;
        cci.bVisible = TRUE;
        SetConsoleCursorInfo(hOut, &cci);
    }

    void showGameOver() {
        cout << "\nGame Over! Final Score: " << score << "\n";
        cout << "Press any key to exit...\n";
        _getch();
    }
};

int main() {
    // Fixed board size; adjust if you like
    const int width = 60;
    const int height = 25;

    // Clear screen once and position cursor for smooth redraw
    system("cls");
    SnakeGame game(width, height);
    game.run();
    return 0;
}