#include<iostream>
using namespace std;

class Test{
    public:
        int a;
        static int count;
        Test(){
            a = 10;
            count++;
        }
};

int Test::count = 0;
int main(){
    Test t1, t2;
    cout<<t1.count<<endl<<t2.count<<endl;
    return 0;
}