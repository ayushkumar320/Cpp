#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        // Constructor to set private variables
        Complex(int r = 0, int i = 0){
            real = r;
            img = i;
        }
        // Declaring a friend function to add two complex numbers
        friend Complex operator+(Complex c1, Complex c2); // Friend function prototyping

        // Making a get function
        // void set_real(int a){
        //     real = a;
        // }
        // void set_img(int b){
        //     img = b;
        // }
        
        // Making a display function
        void display(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
};

// Declaring the operator+ function outside the class
Complex operator+(Complex c1, Complex c2){
    Complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}
int main(){
    int a1, a2, b1, b2;
    cout<<"Enter the real part of first complex: ";
    cin>>a1;
    cout<<"Enter the imaginary part of first complex: ";
    cin>>b1;
    cout<<"Enter the real part of second complex: ";
    cin>>a2;
    cout<<"Enter the imaginary part of second complex: ";
    cin>>b2;
    
    Complex c1(a1, b1);
    Complex c2(a2, b2);
    Complex c3;
    c3 = c1+c2;
    c3.display();
    return 0;
}