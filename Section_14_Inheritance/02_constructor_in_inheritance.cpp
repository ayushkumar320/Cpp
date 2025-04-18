#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"Default of Base"<<endl;
        }
        Base (int d){
            cout<<"Param of Base "<<d<<endl;
        }
};

class Derived:public Base{
    public:
        Derived(){
            cout<<"Default of derived"<<endl;
        }
        Derived(int b){
            cout<<"Param of Derived "<<b<<endl;
        }
        Derived(int x, int y):Base(x){
            cout<<"Param of derived "<<y<<endl;
        }
};

int main(){
    Derived b;
    Derived c(11);
    Derived d(11, 14);
    return 0;
}