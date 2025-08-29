#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;
    int salary;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setSalary(int s) {
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee E;

    // set values
    E.setName("Anmol");
    E.setAge(22);
    E.setSalary(50000);

    // display values
    E.display();

    return 0;
}