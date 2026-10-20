#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter N: ";
    cin >> n;
    long long a=0,b=1;
    cout <<"Fibonacci numbers:";
    for (int i=0; i < n;i++){
        cout << a << " ";
        long long sum = a+b;
        a=b;
        b=sum;
    }
    cout << endl;

return 0;
}
