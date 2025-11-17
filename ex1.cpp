// Q. program to access public data members from outside the class defination.

#include <iostream>
using namespace std;

class sum{
    public:
        int x, y;
};

int main(){
    sum s;
    s.x = 10;
    s.y = 20;
    cout << "Sum: " << s.x + s.y << endl;
    return 0;
}