#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number to check: ";
    cin>>num;
    int sum = 0;
    for (int i = 1; i < num; i++){
        if (num%i == 0){
            sum+=i;
        }
        else{
            continue;
        }
    }
    if (sum == num){
        cout<<"Perfect number\n";
    }
    else{
        cout<<"Not a perfect number!\n";
    }
    return 0;
}