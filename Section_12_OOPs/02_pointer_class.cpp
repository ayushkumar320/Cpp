#include<iostream>
using namespace std;

class Rectangle{
    public:
        float length;
        float breadth;
        float area(){
            return length*breadth;
        }
        float permimeter(){
            return 2*(length+breadth);
        }

};

int main(){
    Rectangle r;
    Rectangle* p;
    p = &r;
    p-> length = 10.0;
    p->breadth = 2.2; 
    cout<<p->area()<<endl;
    return 0;
}