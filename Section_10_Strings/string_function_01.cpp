// strlen(str) - Returns the length of a string

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char str[] = "Hello";
    // cout<<strlen(str)<<endl;

    char* s = new char[40];
    cout<<"Enter the string: ";
    cin.getline(s, 40);
    cout<<"Length: "<<strlen(s)<<endl;
    
    
    return 0;
}