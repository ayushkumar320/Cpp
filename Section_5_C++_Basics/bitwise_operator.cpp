#include<iostream>
using namespace std;
int main(){
    int x = 11, y=7, z;
    // z = x&y; // and operation
    // cout<<"x and y is: "<<z;
    
    // z = x|y; // or operation
    // cout<<"x or y is: "<<z;

    z = x^y; // not operator
    cout<<"The value of x not y is: "<<z;
    return 0;
}