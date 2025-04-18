#include<iostream>
using namespace std;

void swap(int* , int*);

int main(){
    int x = 10, y = 20;
    swap(&x, &y); // Passing actual parameters's as addresses
    cout<<x<<" "<<y<<endl;
    return 0;
}

void swap(int*a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}