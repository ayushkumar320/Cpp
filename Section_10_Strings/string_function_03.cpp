// strcpy(dest, source) - Used top copy string from dest to source
// strncpy(dest, source, len to copy) - Used to copy till given length

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[10] = "good";
    char s2[10] = "";
    strcpy(s2, s1);
    cout<<s2<<endl;
    return 0;
}