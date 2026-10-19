#include <iostream>
using namespace std;

void printLine(int length, char symbol) {
    for (int i = 0; i < length; i++) {
        cout << symbol;
    }
    cout << endl;
}

int main() {
    printLine(14, '=');
    cout << "PROGRAM" << endl;
    printLine(14, '=');
    
    return 0;
}