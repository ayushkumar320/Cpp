#include<iostream>
using namespace std;

int division(int , int);
int main(){
    int a = 10, b = 0, c;
    try{
        c = division(a, b);
        cout<<c<<endl;
    }
    catch(int e){
        cout<<"Divion by zero, error code: "<<e<<endl;
    }
    return 0;
}

int division(int x, int y){
    if (y==0){throw 1;}
    else{return x/y;}
}