#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b, c;
    float r1, r2;
    cout<<"Enter a b and c resepctively\n";
    cin>>a>>b>>c;
    float d = ((b*b) - (4*a*c));
    if (d >= 0){
        r1 = (-b + sqrt(b*b - 4*a*c))/(2.0*a);
        r2 = (-b - sqrt(b*b - 4*a*c))/(2.0*a);
        cout<<"Roots are: "<<r1<<" and "<<r2;
    }
    else{
        float real, img;
        real = -(b/(2.0*a));
        img = sqrt(-((b*b) - (4*a*c)));
        cout<<"Roots are: "<<real<<"+"<<img<<"i\n";
        cout<<"Roots are: "<<real<<"-"<<img<<"i\n";
    }
    return 0;
}