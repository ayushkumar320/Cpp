#include<iostream>
using namespace std;

int main(){
    /*
    <<i - left shift: shifts each bit value to ith left place and hence,
    we need to multiply the number by 2^i.

    >>i - right shifts: shifts each bit value to ith right place 
    hence ,
    we need to divide the original number by 2^i (2 raise to power i). 
    */
    int x = 10, y1, y2;
    y1 = x<<2;
    y2 = x>>2;
    cout<<"Left shift: "<<y1<<endl;
    cout<<"Right shift: "<<y2<<endl;
    return 0;
}