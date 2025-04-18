// strcmp(s1, s2) - Used to compate strings, return 0 if both are equal, return positive if first string comes after s2 in dictionary order, return -ve if first string comes first in dictionary order

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[20] = "Hello";
    char s2[20] = "Hello";
    cout<<strcmp(s1, s2)<<endl;
    char s3[20] = "hello";
    cout<<strcmp(s1, s3)<<endl;
    cout<<strcmp(s3, s1)<<endl;

    return 0;
}