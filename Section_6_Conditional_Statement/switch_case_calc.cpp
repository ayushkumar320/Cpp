#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    int option;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"1. Add\n2. Sub\n3. Multiply\n4. Divide\nEnter the option\n";
    cin>>option;
    switch (option){
        case 1:
            c = a+b;
            break;
        case 2:
            c = a-b;
            break;
        case 3:
            c = a*b;
            break;
        case 4:
            c = a/b;
            break;
        defualt:
            cout<<"Wrong choice!\n";
    }
    cout<<"Result is: "<<c;
    return 0;
}