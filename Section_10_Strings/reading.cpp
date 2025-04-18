#include<iostream>
using namespace std;

int main(){
    char s[20];
    cout<<"Enter your name: ";
    // Inputs only first word
    // cin>>s;

    // To input more words with spaces
    cin.get(s, 20);
    // cin.getline(s, 20);
    cout<<"hello, "<<s<<endl;
    char s2[20];
    cout<<"Enter the name again: ";
    cin.get(s2, 20); // does not reads s2 as we are using get, to counter this we use getline instead of get
    cout<<"welcome, "<<s2<<endl;
    return 0;
}