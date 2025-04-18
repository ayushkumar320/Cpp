#include<iostream>
using namespace std;
int main(){
    int A[7] = {31, 42, 66, 71, 23, 53, 86};
    int sum = 0;
    for (int x:A){
        sum+=x;
    }
    cout<<sum<<endl;
    return 0;
}