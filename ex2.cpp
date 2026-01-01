
// Q. Progam to access private data members through public member functions.

#include <iostream>
using namespace std;

class Age{
    private:
    int age = 18;  //private data members

    public:
    void display(){   // public member functions
        cout<<"Age :"<<age;
    }
};

int main(){
    Age obj1;      // creating object ob1
    obj1.display();
    return 0;
}
// Output: Age :18