#include <iostream>
using namespace std;

bool isPositive(int number) { // функция возвращает 
    return number > 0; // если число меньше 0 то фолсе 
}

bool isThreeDigit(int number) { // проверка трехзначности 
    return number >= 100 && number <= 999; // если число от 100 до 999  логическое 
}

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;
    
    if (isPositive(number)) { // если функция вернула правду 
        cout << "Positive: yes" << endl; // выводим да 
    } else {
        cout << "Positive: no" << endl; // выводим нет 
    }
    
    if (isThreeDigit(number)) { // то же для трехзначности 
        cout << "Three-digit: yes" << endl;
    } else {
        cout << "Three-digit: no" << endl;
    }
    
    return 0;
}