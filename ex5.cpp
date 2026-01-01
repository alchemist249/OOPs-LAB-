#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int roll;

public:
    void set_data();
    void display();
};
void Student::set_data(){
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter roll : ";
    cin>>roll;
}
void Student::display(){ 
    cout<<"Name is : "<<name<<"\nRoll No : "<<roll<<endl;
}

int main(){
    Student s1;

    cout<<"Enter details of the Student-->\n";
    s1.set_data();
    cout<<endl<<"---Details of the Student---\n";
    s1.display();

    return 0;
}