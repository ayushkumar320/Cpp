#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number to calculate factors: ";
    cin>>num;
    cout<<"Factors are: ";
    for (int i = 1; i<num+1; i++){
        if (num%i == 0){
            cout<<i<<" ";
        }
        else{
            continue;
        }
    }
    return 0;
}