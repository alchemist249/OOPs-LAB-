#include <iostream>
using namespace std;

class Sum{
    private:
    int x,y;  

    public:
    void add(){  
       cout<<"Enter x : ";
       cin>>x;
       cout<<"Enter y : ";
       cin>>y;
       cout<<"Total of "<<x<<" and "<<y<<" is = "<<x+y;
    }
};

int main(){
    Sum ob1;    // creating obj
    cout<<"For addition-->"<<endl;
    ob1.add();

    return 0;
}