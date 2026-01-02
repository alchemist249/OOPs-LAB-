
#include <iostream>
using namespace std;

class Base{
    protected:
    string name;
    int roll;
    public:
    void get_info_base();
};

class Student:protected Base{
    int sub_code;
    int inter_marks;
    int exter_marks;

    public:
    void get_info_Stu();
    void display_marksheet();
};

void Student::get_info_Stu(){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter roll: ";
    cin>>roll;
    cout<<"Enter subject code: ";
    cin>>sub_code;
    cout<<"Enter internal Marks: ";
    cin>>inter_marks;
    cout<<"Enter external Marks: ";
    cin>>exter_marks;
}

void Student::display_marksheet(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<roll<<endl;
    cout<<"Subject Code: "<<sub_code<<endl;
    cout<<"Internal Marks: "<<inter_marks<<endl;
    cout<<"External Marks: "<<exter_marks<<endl;
}

int main(){
    Student s1;
    cout<<"Enter the details of the marksheet--> "<<endl;
    s1.get_info_Stu();

    cout<<"\n---Marksheet---\n";
    s1.display_marksheet();
    
    return 0;
}