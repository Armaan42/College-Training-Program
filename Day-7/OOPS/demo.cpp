#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Default constructor
    Teacher() {
        salary = 0.0; // Initialize salary to 0
    }

    // Parameterized constructor
    // Teacher(string s, string d, string sub, double sal) {
    //     name = s;
    //     dept = d;
    //     subject = sub;
    //     salary = sal;
    // }

    void changeDept(string newDept) {
        dept = newDept;
    }

    void setSalary(double s) {
        salary = s;
    }

    double getSalary() {
        return salary;
    }

    void getInfo() {
        cout << "Teacher name: " << name << endl;
        cout << "Teacher subject: " << subject << endl;
    }
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
};

int main() {
    Teacher t1("Armaan", "CSE", "C++", 150000000);
    // t1.changeDept("CSE");
    // cout << t1.name << endl;
    // t1.getInfo();

    Teacher t2(t1);
    t2.getInfo();
    // t1.setSalary(100000000);
    // cout << t1.getSalary() << endl;

    return 0;
}
