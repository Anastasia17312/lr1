#include <iostream>
using namespace std;

void printLine(int length, char symbol)
{
    for (int i = 0; i < length; i++)
    {
        cout << symbol;
    }
    cout << '\n';
}

int main()
{
    printLine(14, '=');
    cout << "PROGRAM" << '\n';
    printLine(14, '=');
    
    return 0;
}