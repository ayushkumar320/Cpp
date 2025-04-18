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
        Complex operator+(Complex x){
            Complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;
            return temp;
        }
        Complex operator-(Complex x){
            Complex temp;
            temp.real = real - x.real;
            temp.img = img - x.img; 
            return temp; 
        }
        int get_real(){
            return real;
        }
        int get_img(){
            return img;
        }
};


int main(){
    Complex c1(3, 7);
    Complex c2(5, 4);
    Complex c3, c4;
    // c3 = c1.add(c2);
    c3 = c1+c2; // Operator Overloaded
    c4 = c1-c2;
    cout<<c3.get_real()<<"+"<<c3.get_img()<<"i"<<endl;
    cout<<c4.get_real()<<"+"<<c4.get_img()<<"i"<<endl;
    return 0;
}