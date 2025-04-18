// Accessor are used to access/return/print the private class members
// Mutators are used to set the value of any private class members

#include<iostream>
using namespace std;

class Rectangle{
    private: 
        int length;
        int breadth;
    public:
        void setLength(int l){
            length = l; // Sets the value of length when function is called
        }
        void setBreadth(int b){
            breadth = b;
        }
        int getLength(){
            return length; // used to print length when this function is called
        }
        int getBreadth(){
            return breadth;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};


int main(){
    int len, bre;
    cout<<"Enter the length and breadth of Rectangle\n";
    cin>>len>>bre;
    Rectangle r;
    r.setLength(len);
    r.setBreadth(bre);
    cout<<"Area is: "<<r.area()<<endl<<"Perimeter is: "<<r.perimeter()<<endl;
    cout<<"Length is: "<<r.getLength()<<endl<<"Breadth is: "<<r.getBreadth()<<endl;
    return 0;
}