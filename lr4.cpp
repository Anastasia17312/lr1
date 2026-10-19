#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;
    int count = 0;
    
    cout << "Enter number: ";
    cin >> number;
    
    while (number != 0) {
        sum += number;
        count++;
        
        cout << "Enter number: ";
        cin >> number;
    }
    
    cout << "Count: " << count << endl;
    cout << "Sum: " << sum << endl;
    
    return 0;
}