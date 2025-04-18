#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    // cin.getline(str, 20); does not work with string class
    cout<<"Enter your name: ";
    getline(cin, str);
    cout<<"hello, "<<str<<endl;
    return 0;
}