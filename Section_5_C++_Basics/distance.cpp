#include<iostream>
using namespace std;

int distance(int, int, int);
int main(){
    int v, u, a;
    cout<<"Enter v, u and a repectively: ";
    cin>>v>>u>>a;
    cout<<"Distance: "<<distance(v, a, u);
    return 0;
}
int distance(int v, int a, int u){
    return ((v*v) - (u*u))/(2*a);
}