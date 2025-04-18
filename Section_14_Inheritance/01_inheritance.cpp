#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l = 0, int b = 0){
            length = l;
            breadth = b;
        }
        void set_length(int l){
            length = l;
        }
        void set_breadth(int b){
            breadth = b;
        }
        int get_length(){
            return length;
        }
        int get_breadth(){
            return breadth;
        }      
        int area(){
            return length*breadth;
        }
};

class Cuboid: public Rectangle{
    private:
        int height;
    public:
        Cuboid(int l = 0, int b = 0, int h = 0): Rectangle(l, b){
            height = h;
        }
        int get_height(){
            return height;
        }
        void set_height(int h){
            height = h;
        }
        int volume(){
            return get_length()*get_breadth()*height;
        }
};

int main(){
    Cuboid c(5, 5, 5);
    cout<<c.volume()<<endl;
    return 0;
}