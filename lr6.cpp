#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;
    
    int count = 0;
    int sum = 0;
    
    while (number > 0) {
        int digit = number % 10;
        sum += digit;
        count++;
        number /= 10;
    }
    
    cout << "Digit count: " << count << endl;
    cout << "Digit sum: " << sum << endl;
    
    return 0;
}