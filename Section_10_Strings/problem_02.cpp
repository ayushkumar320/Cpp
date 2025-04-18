// Chnage Case from upper to lower;
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "WELCOME";
    // string::iterator i;
    // for (i = s.begin(); i!=s.end(); i++){
    //     *i = *i+32;
    //     cout<<*i;
    // }
    for (int i = 0; s[i]!='\0'; i++){
        s[i]+=32;
        cout<<s[i];
    }

    return 0;
}