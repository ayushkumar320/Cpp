#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "hello";
    s1.append(" world");
    s1.insert(3, "kk");
    s1.replace(3, 4, "LL");
    cout<<s1<<endl;
    return 0;
}