#include<iostream>
using namespace std;

int main(){
    // int size;
    // cout<<"Enter the size of array ";
    // cin>>size;
    // int A[size];
    // cout<<"Size of array: "<<sizeof(A)<<endl;
    // size = 35;
    // cout<<"Size of array: "<<sizeof(A)<<endl; // No change in size!

    // To make dynamic array, use heap allocation!
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int* p = new int[size]; // Dynamic array
    cout<<sizeof(p)<<endl;

    cout<<"New size: ";
    cin>>size;
    delete[] p;
    p = new int[size];
    cout<<sizeof(p)<<endl;
    return 0;
}