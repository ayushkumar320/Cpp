#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"Enter two numbers\n";
    cin>>n1>>n2;
    int k;
    if (n1>n2){
        k = n2;
    }
    else{
        k = n1;
    }
    int gdc = 1;
    for (int i = 2; i <= k; i++){
        if (n1%i == 0 && n2%k == 0){
            gdc = i;
        }
    }
    cout<<"GDC = "<<gdc<<endl;
    return 0;
}