#include<iostream>
using namespace std;
template <class T> // used to create a template that takes the return type same as the arguments passed to it.
T maxim(T x, T y){
    // if (x>y){
    //     return x;
    // }
    // else {
    //     return y;
    // }
    return x>y?x:y;
}
int main(){
    cout<<maxim(3, 4)<<endl;
    cout<<maxim(3.2f, 4.7f)<<endl;
    return 0;
}