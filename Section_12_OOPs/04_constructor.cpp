#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }
        int area(){
            return length*breadth;
        }
        int permineter(){
            return 2*(length+breadth);
        }
};

int main(void){
    Rectangle r1(10, 5);
    cout<<r1.area();
    
    return 0;
}