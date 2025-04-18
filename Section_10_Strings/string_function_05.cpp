// strchr(main, 'char') - Gives the occurance of a character
// strrchr(main, 'char') - Give occurance from right
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char st[20] = "programming";
    cout<<strchr(st, 'm')<<endl;
    cout<<strrchr(st, 'm')<<endl;
    return 0;
}