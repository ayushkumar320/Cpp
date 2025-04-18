#include<iostream>
using namespace std;

class Your;
class My{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        friend Your;
};

class Your{
    public:
        My m;
        void fun(){
            m.a = 10;
            m.b = 101;
            m.c = 105;
        }
};
int main(){
    cout<<"Works";
    return 0;
}