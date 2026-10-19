#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int sum= 0;
    long long product = 1;
    
    for(int i=1; i <=N;i++) {
        sum +=i;
        product *=i;
    }
    cout <<"sum:"<<sum<< endl; // выводим сумму 
    cout <<"product:"<<product<< endl; // выводим произв 
     return 0;
}
