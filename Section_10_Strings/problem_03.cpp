// WAP to count number of vowels, words, and consonants
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "how Many Words";
    int vowels = 0, consonant = 0, space = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vowels++;
        }
        else if(s[i] == ' '){
            space++;
        }
        else{
            consonant++;
        }
    }
    cout<<"Vowels are: "<<vowels<<" Consonants are: "<<consonant<<" Words are: "<<space+1<<endl;
    return 0;
}