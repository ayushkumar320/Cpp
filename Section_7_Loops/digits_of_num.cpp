#include<iostream>
int main(){
    int n, r = 0;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    while(n!=0){
        r = n%10;
        n = n/10;
        std::cout<<r<<std::endl;
    }
    return 0;
}