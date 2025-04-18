#include<iostream>
using namespace std;

void fun(int n){
    if (n>0) // base condition so that recursion terminates
    {
        cout<<n<<endl;
        fun(n-1);
    }
}

int main(){
    fun(5);
    return 0; 
}