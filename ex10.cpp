#include <iostream>
using namespace std;

class Employee{ 
    private:
    int emp_no;
    string emp_name;

    public:
    void get_emp_data();
    void display_emp_data();
};
void Employee::get_emp_data(){
    cout << "Enter Employee No : ";
    cin >> emp_no;
    cout<<"Enter Employee name : ";
    cin>>emp_name;
}
void Employee::display_emp_data(){
    cout<<"Employee No : "<<emp_no<<endl;
    cout<<"Employee Name : "<<emp_name<<endl;
}
class Dept: public Employee{
    private:
    string dept_name;

    public:
    void get_dept_data();
    void display_dept_data();
};
void Dept:: get_dept_data(){
    cout << "Enter Dept Name : ";
    cin >> dept_name;
}
void Dept:: display_dept_data(){
    cout<<"Department Name : "<<dept_name<<endl;
}
class Project{  
    private:
    string pro_name;

    public:
    void get_pro_data();
    void display_pro_data();
};
void Project:: get_pro_data(){
    cout << "Enter Project Name : ";
    cin >> pro_name;
}
void Project:: display_pro_data(){
    cout <<"Project Name : "<<pro_name<<endl;
}
class BILL: public Dept, public Project{
    private:
    int hours;
    float rate;
    float total;

    public:
    void get_bill_data();
    void display_bill_data();
};
void BILL::get_bill_data(){
    cout<<"Enter time in hours : ";
    cin>>hours;
    cout<<"Enter Rate : ";
    cin>>rate;
    cout<<"Enter Total : ";
    cin>>total;
}
void BILL::display_bill_data(){
    cout<<"Hourswork : "<<hours<<endl;
    cout<<"Rate : "<<rate<<endl;
    cout<<"Total : "<<total;
}

int main(){
    BILL emp1;
    cout<<"---Enter the details---"<<endl;
    emp1.get_emp_data();
    emp1.get_dept_data();
    emp1.get_pro_data();
    emp1.get_bill_data();

    cout<<"\n\n---Details---\n";
    emp1.display_emp_data();
    emp1.display_dept_data();
    emp1.display_pro_data();
    emp1.display_bill_data();

    return 0;
}