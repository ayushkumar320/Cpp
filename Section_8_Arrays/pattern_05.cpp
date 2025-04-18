#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int spaces = 0; spaces < i; spaces++) {
            cout << "  ";
        }
        
        // Print stars
        for (int j = 0; j < rows - i; j++) {
            cout << "* ";
        }
        
        cout << endl;
    }

    return 0;
}
