#include<iostream>
using namespace std;

void swap(int , int);
int main(){
    int x = 10, y = 20;
    swap(x, y); // As it is a call by value it does not swap
    cout<<x<<" "<<y<<endl;
    return 0;
}

void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}