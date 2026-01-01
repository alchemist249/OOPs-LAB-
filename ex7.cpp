
#include <iostream>
using namespace std;


class Employee {
private:
    int em_code;
    string name;
public:

    void getemp();
    void display();
};

void Employee::getemp(){
    cout << "Enter employee code: ";
    cin >> em_code;
    cout << "Enter employee name: ";
    cin >> name;
}

void Employee::display() {
    cout << "Employee Code: " << em_code << endl;
    cout << "Employee Name: " << name << endl;
}

class Salary : public Employee {
private:
    int grosspay;
public:
    void get_salary();
    void display_salary();
};

void Salary::get_salary() {
    cout << "Enter salary: ";
    cin >> grosspay;
}

void Salary::display_salary(){
    cout<<"Salary of the employee is : "<<grosspay;
}    
   

int main() {
    Salary emp1;
    cout << "\n--- Enter employee Details ---\n";
    emp1.getemp();
    emp1.get_salary();
    cout << "\n--- Employee Details ---\n";
    emp1.display();
    emp1.display_salary();

    return 0;
}