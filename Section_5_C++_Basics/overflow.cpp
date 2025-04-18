#include<iostream>
using namespace std;
int main(){
    char x = 127;
    cout<<(int)x<<"\n";
    x++; // due to overflow, 128 = -128
    cout<<(int)x<<"\n";
    return 0;
}