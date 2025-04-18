// WAP to calculate Net Salary
#include<iostream>
using namespace std;

int main(){
    float base;
    cout<<"Enter the base salary"<<endl;
    cin>>base;
    float allowance;
    cout<<"Enter the allowance percent"<<endl;
    cin>>allowance;
    float deduction;
    cout<<"Enter the deduction percent"<<endl;
    cin>>deduction;
    float net = ((base) + (base*allowance/100) - (base*deduction/100));
    cout<<"Net salay: "<<net<<endl;
    return 0;
}