#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number to check: ";
    cin>>num;
    int prime = 1;
    for (int i = 2; i < num; i++){
        if (num%i == 0){
            prime = 0;
        }
    }
    if (prime == 0){
        cout<<"Not a prime number\n";
    }
    else{
        cout<<"Prime Number!\n";
    }
    return 0;
}