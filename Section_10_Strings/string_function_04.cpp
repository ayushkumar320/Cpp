// strstr(main, sub) - checks and returns the sub string in main string
#include<iostream>
#include<cstring>
using namespace std; 
int main(){
    char s1[15] = "programing";
    char s2[8] = "gram";
    if (strstr(s1, s2)!= NULL){
        cout<<strstr(s1, s2)<<endl;
    }
    else{
        cout<<"Not found!"<<endl;
    }
    return 0;
}