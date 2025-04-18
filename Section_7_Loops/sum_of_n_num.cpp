#include<iostream>
using namespace std;

int main(){
    int sum = 0, n;
    cout<<"Enter the nth natural number for summation: ";
    cin>>n;
    for (int i = 0 ; i <= n; i++){
        sum+=i;
    }
    cout<<"Sum is: "<<sum;
    return 0;
}