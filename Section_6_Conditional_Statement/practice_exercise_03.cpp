#include<iostream>
using namespace std;
int main(){
    int bill, discount, pay;
    cout<<"Enter the bill amount: ";
    cin>>bill;
    if (bill < 100){
        discount = 0;
    }
    else if(bill >= 100  && bill < 500){
        discount = 0.1*bill;
    }
    else{
        discount = bill*0.2;
    }
    cout<<"Discount : "<<discount<<endl;
    cout<<"Final bill : "<<(bill - discount)<<endl;
    return 0;
}