#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){    // Overloaded Function
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    cout<<sum(1, 5, 1)<<endl;
    cout<<sum(1.1f, 2.7f)<<endl;
    return 0;
}