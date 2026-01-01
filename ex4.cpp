#include <iostream>
using namespace std;

class Num{
    private:
    int x,y;                
    void Multiply(){        
       cout<<"Enter x : ";
       cin>>x;
       cout<<"Enter y : ";
       cin>>y;
       cout<<"Multiplication value of "<<x<<" and "<<y<<" is = "<<x*y;
       }

    public:
    void add(){              
       cout<<"Enter x : ";
       cin>>x;
       cout<<"Enter y : ";
       cin>>y;
       cout<<"Total of "<<x<<" and "<<y<<" is = "<<x+y<<endl<<endl;

       cout<<"For Multiplication-->"<<endl;
       Multiply();
    }
};

int main(){
    Num ob1;              
    cout<<"For addition-->"<<endl;
    ob1.add();

    return 0;
}