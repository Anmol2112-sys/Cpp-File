#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    int rollno;
    public:
    void setName(string n){
        name=n;
    }
    void setAge(int a){
        age=a;
    }
    void setRollno(int r){
        rollno=r;
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"RollNo:"<<rollno<<endl;
    }
};

int main () {
    Student S;

    S.setName("Anmol Aditya");
    S.setAge(21);
    S.setRollno(46);

    S.display();

    return 0;
}