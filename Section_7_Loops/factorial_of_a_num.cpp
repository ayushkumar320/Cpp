#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want to calculate the factorial: ";
    cin>>n;
    int factorial = 1;
    for (int i = 1; i <=n; i++){
        factorial*=i;
    }
    cout<<"Factorial is: "<<factorial;
    return 0;
}