#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        Complex(int r = 0, int i = 0){
            real = r;
            img = i;
        }

        friend ostream& operator<<(ostream &o, Complex c1); // Prototyping
};
ostream& operator<<(ostream &o, Complex c1){
    o<<c1.real<<"+"<<c1.img<<"i";
}

int main(){
    Complex c(10, 5);
    cout<<c; // Operator overloaded
    return 0;
}