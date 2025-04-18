#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the rows: ";
    cin>>rows;
    for(int i = 0; i < rows; i++){
        for (int spaces = 0; spaces < rows - i-1; spaces++){
            cout<<" ";
        }
        for (int j = 0; j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}