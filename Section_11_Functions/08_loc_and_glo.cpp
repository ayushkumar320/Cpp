#include<iostream>
using namespace std;

int g = 5; // Global variable

void fun(){
    int a = 10; // Local variable
    a++;
    g +=a;
    cout<<g<<endl;
}

int main(){
    fun();
    g += 10;
    cout<<g;
    return 0;
}