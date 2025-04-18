#include<iostream>
#include<cmath>
using namespace std;

int main(void){
    int x1, x2, y1, y2;
    cout<<"Enter x1 and x2: ";
    cin>>x1>>x2;
    cout<<"Enter y1 and y2: ";
    cin>>y1>>y2;
    float dist = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<"Distance is: "<<dist;  
    return 0;
}