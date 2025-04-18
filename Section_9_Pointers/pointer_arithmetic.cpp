#include<iostream>
using namespace std;

int main(){
    int A[5] = {2, 4, 6, 8, 10};
    int* p = A; // we dont need to use &A here in arrays
    p++;
    cout<<*p<<endl;
    p=p+3;
    cout<<*p<<endl;
    p = p-4;
    cout<<*p<<endl;
    return 0;
}