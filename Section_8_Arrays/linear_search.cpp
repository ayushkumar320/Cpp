#include<iostream>
using namespace std;

int main(){
    int A[10] = {6, 11, 25, 8, 15, 7, 12, 20, 9, 14};
    int key, n = 10;
    cout<<"Enter the value you want to search!\n";
    cin>>key;
    for (int i = 0; i < n; i++){
        if (key == A[i]){
            cout<<"Found "<<key<<endl;
            return 0;
        }
    }
    cout<<"Not Found!\n";
    return 1;
}