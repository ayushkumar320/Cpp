#include<iostream>
using namespace std;

class Student{
    private:
        int roll;
        string name;
        int mathMarks;
        int phyMarks;
        int chemMarks;
    public:
        Student(int r, string n, int m, int p, int c){
            roll = r;
            name = n;
            mathMarks = m;
            phyMarks = p;
            chemMarks = c;
        }
        int total(){
            return mathMarks+chemMarks+phyMarks;
        }
        
        char grade(){
            float average = total()/3.0;
            
            if(average>=160){
                return 'A';
            }
            else if(average>=140 && average < 160){
                return 'B';
            }
            else{
                return 'C';
            }
        }
};

int main(){
    Student s(101, "Ayush", 28, 55, 49);
    cout<<s.grade()<<endl<<s.total()<<endl;
    return 0;
}