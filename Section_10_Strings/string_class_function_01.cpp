#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "Hello";
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    cout<<s.capacity()<<endl;
    cout<<s.max_size()<<endl;
    return 0;
}