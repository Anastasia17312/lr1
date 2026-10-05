#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char op;
    
    cout << "Enter first number: ";
    cin >> a;
    
    cout << "Enter second number: ";
    cin >> b;
    
    cout << "Enter operation: ";
    cin >> op;
    
    if (op == '+') {
        result = a + b;
    } else if (op == '-') {
        result = a - b;
    } else if (op == '*') {
        result = a * b;
    } else if (op == '/') {
        result = a / b;
    } else {
        cout << "Invalid operation" << endl;
        return 1;
    }
    
    cout << "Result: " << result << endl;
    return 0;
}