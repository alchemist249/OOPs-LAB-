
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
    Student s[5];
    int n;
    cout<<"Enter the number of student : ";
    cin>>n;

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << (i+1)<<" : "<<endl;
        s[i].set_data();
    }

    cout << "\n--- Student Details ---\n";
    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << (i+1) << ": \n";
        s[i].display();
    }
    return 0;
}