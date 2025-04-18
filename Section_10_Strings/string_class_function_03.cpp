// s.copy(char dest[], number of letters to copy) - copies the string to destination
// s.find("str/char") - Returns the index of the searched character or string from left, and s.rfind("str/char") returns the index from right
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Welcome";
    char str[10];
    
    s.copy(str, 3);

    str[3] = '\0';
    cout<<str<<endl;
    
    string st = "How are you?";
    cout<<st.find("you");
    return 0;
}