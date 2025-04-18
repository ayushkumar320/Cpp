#include<iostream>
using namespace std;
int main(){
    int m1, m2, m3;
    cout<<"Enter the marks in three subjects\n";
    cin>>m1>>m2>>m3;
    float avg = (m1+m2+m3)/3.0;
    if (avg>=60){
        cout<<'A';
    }
    else if (avg >=35 && avg < 60){
        cout<<'B';
    }
    else{
        cout<<'C';
    }
    return 0;
}