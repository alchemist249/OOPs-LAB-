#include <iostream>
#include <string>
using namespace std;


class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudentData() {
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore(); 
    }

    void displayStudentData() {
        cout << "\n MARKSHEET\n";
        cout << "Name       : " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};


class Exam : public Student {
private:
    string subjectName;
    int subjectCode;
    int internalMarks;
    int externalMarks;

public:
    void getExamData() {
        getStudentData(); 
        cout << "Enter Subject Name: ";
        getline(cin, subjectName);
        cout << "Enter Subject Code: ";
        cin >> subjectCode;
        cout << "Enter Internal Marks (out of 30): ";
        cin >> internalMarks;
        cout << "Enter External Marks (out of 70): ";
        cin >> externalMarks;
    }

    void displayMarksheet() {
        displayStudentData();
        cout << "Subject    : " << subjectName << endl;
        cout << "Code       : " << subjectCode << endl;
        cout << "Internal   : " << internalMarks << "/30" << endl;
        cout << "External   : " << externalMarks << "/70" << endl;
        cout << "Total      : " << internalMarks + externalMarks << "/100" << endl;
        cout << "--------------------------------------------------\n";
    }
};


int main() {
    Exam e1;
    e1.getExamData();
    e1.displayMarksheet();
    return 0;
}