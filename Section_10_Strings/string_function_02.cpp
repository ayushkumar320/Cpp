// strcmp(dest, source) - used to concatenate two strings

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[40] = "good ";
    char s2[10] = "moring";
    strcat(s1, s2); // strings got joined
    cout<<s1<<endl;

    char s3[40] = "hey ";
    char s4[20] = "youtube";
    strncat(s3, s4, 3);
    cout<<s3<<endl;
    return 0;
}