#include <iostream>
using namespace std;

long long factorial(int n) {  
    long long result = 1; 
    for (int i = 1; i <= n; i++) { 
        result *= i; 
    }
    return result;
}

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;
    
    long long fact = factorial(number); 
    cout << "Factorial: " << fact << endl; 
    
    return 0;
}