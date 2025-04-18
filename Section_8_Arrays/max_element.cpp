#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 8, 6, 9, 5, 2, 7};
    int n = 7, max = arr[0];
    for (int i = 0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"Max element is: "<<max;
    return 0;
}