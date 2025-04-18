#include<iostream>
using namespace std; 

int main(){
    // int A[] = {1, 2, 3, 4, 5}; // memory allocated in stack
    int* p = new int[5]; // Memory allocated in heap
    p[0] = 14;
    p[1] = 12;
    p[3] = 22;
    cout<<p[1]<<endl;
    cout<<&p[1]<<endl;
    delete []p;
    p = nullptr;
    return 0;
}