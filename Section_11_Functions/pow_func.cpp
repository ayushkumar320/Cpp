// WAP to calculate powers
#include<iostream>
using namespace std;

int pow(int, int);
int main(){
    cout<<pow(2, 5);
    return 0;
}

int pow(int base, int exp){
    int result = 1;
    for(int i = 0; i<exp; i++){
        result*=base;
    }
    return result;
}