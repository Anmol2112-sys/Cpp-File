File Name:Rectangle_object_c++.cpp
#include <iostream>
using namespace std;
class Point { public: // class Point
int x; int y; // Data members
};
class Rect { public: // Rect uses Point
Point TL; // Top-Left. Member of UDT
Point BR; // Bottom-Right. Member of UDT
};
int main() { Rect r = { { 0, 2 }, { 5, 7 } };
// r.TL <-- { 0, 2 }; r.BR <-- { 5, 7 }
// r.TL.x <-- 0; r.TL.y <-- 2
// Rectangle Object r accessed
cout << "[(" << r.TL.x << " " << r.TL.y <<
") (" << r.BR.x << " " << r.BR.y << ")]";
}
