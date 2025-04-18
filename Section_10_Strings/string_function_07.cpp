// strtol(str, NULL, base) - Converts string to long integer to do calculations
// strtof(str, NULL) - Converts string to floating point 

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s1[10] = "234";
    char s2[10] = "54.4";
    
    long int x = strtol(s1, NULL, 10);
    x = x+10;

    float y = strtof(s2, NULL);
    y = y+10.1;
    cout<<x<<endl<<y<<endl;
    return 0;
}