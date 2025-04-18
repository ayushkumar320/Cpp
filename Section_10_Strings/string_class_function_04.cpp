// s.substr(start index, number of letters) - Used to display the substring from a string

// s.compare(str) - used to compare str to s, same as strcmp(s1, s2)

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Programming";
    cout<<str.substr(3, 4)<<endl;
    string s1 = "hello";
    string s2 = "Hello";
    cout<<s2.compare(s1)<<endl; // strcmp(s1, s2)
    
    return 0;
}