#include<iostream>
using namespace std;

int main(){
    char s[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    string  h = "Hello";
    // char* st = "Hello"; // Not allowed in latest compiler
    cout<<s<<endl<<h<<endl;
    return 0;
}