#include <iostream>
using namespace std;

// Объявления функций
int sum(int a, int b);
int difference(int a, int b);
int multiply(int a, int b);

// Определения функций
int sum(int a, int b) {
    return a + b;
}

int difference(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    int s = sum(x, y);
    int d = difference(x, y);
    int m = multiply(x, y);
    
    cout << "Sum: " << s << endl;
    cout << "Difference: " << d << endl;
    cout << "Product: " << m << endl;
    
    return 0;
}