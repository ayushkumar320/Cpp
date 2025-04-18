#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter a, b and c respectively : ";
    cin>>a>>b>>c;
    int d = b*b - 4*a*c;
    
    int r1, r2;
    if (d == 0){
        r1 = -b/(2*a);
        cout<<"real and equal "<<r1;
    }
    else if (d >= 0){
        r1 = (((-b)+sqrt(d))/(2*a));
        r2 = (((-b)-sqrt(d))/(2*a));
        cout<<"roots are "<<r1<<" "<<r2<<endl;
    }
    else if(d<0){
        float real = (-b)/(2.0*a);
        int img = sqrt(-((b*b)- (4*a*c)));
        cout<<"Root: "<<real<<"+"<<img<<"i"<<endl;
        cout<<"Root: "<<real<<"-"<<img<<"i"<<endl;
    }
    return 0;
}