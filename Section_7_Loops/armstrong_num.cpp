#include<iostream>
using namespace std;
int power(int, int);

int main(){
    int num, r;
    cout<<"Enter the number: ";
    cin>>num;
    int original = num;
    int digits = 0;
    int x = num;
    int sum = 0;
    while(x!=0){
        x = x/10;
        digits++;
    }
    while(num!=0){
        r = num%10;
        sum += power(r, digits);
        num = num/10; 
    }
    if (sum == original){
        cout<<"Yes it is an Armstrong Number\n";
    }
    else{
        cout<<"Not an armstrong number\n";
    }
    return 0;
}
int power(int base, int exp){
    int result = 1;
    for (int i = 0; i <exp; i++){
        result *= base;
    }
    return result;
}