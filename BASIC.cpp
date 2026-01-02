#include<iostream>
using namespace std;
class sum
{ public://access specifier//
    int x,y; //data members//
};
int main()
{ 
    sum z;
    int add;
    z.x = 10;
    z.y = 20;
    add = z.x + z.y;
    cout<<"total = "<<add;
    return 0;
//output: total = 30
//[Done] exited with code=0 in 2.109 seconds


//program to to access public members of a class from outside the class defination
}
