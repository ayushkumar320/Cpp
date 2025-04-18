#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number to reverse: ";
    cin>>num;
    int r, result = 0;
    while(num!=0){
        r = num%10;
        result = result*10 + r;
        num=num/10;
    }
    cout<<result<<endl;
    return 0;
}