#include<iostream>
using namespace std;

int add(int, int); // Function Typecasting

int main(){
    int a, b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    cout<<"Sum is: "<<add(a, b)<<endl;
    return 0;
}

int add(int a, int b){
    int z = a+b;
    return z;
}