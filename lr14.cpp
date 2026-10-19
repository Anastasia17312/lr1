#include <iostream>
#include <cmath>
using namespace std;

// 1. Проверка на чётность
bool isEven(int number) {
    return number % 2 == 0;
}

// 2. Проверка на положительность
bool isPositive(int number) {
    return number > 0;
}

// 3. Сумма цифр
int digitSum(int number) {
    int sum = 0;
    number = abs(number); // модуль, чтобы работало с отрицательными
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

// 4. Количество цифр
int digitCount(int number) {
    int count = 0;
    number = abs(number);
    if (number == 0) return 1; // для нуля
    while (number > 0) {
        count++;
        number /= 10;
    }
    return count;
}

// 5. Проверка на простое число
bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    int choice = 1;

    while (choice == 1) {
        cout << "Enter number: ";
        cin >> number;

        cout << "\nEven: " << (isEven(number) ? "yes" : "no") << endl;
        cout << "Positive: " << (isPositive(number) ? "yes" : "no") << endl;
        cout << "Digit sum: " << digitSum(number) << endl;
        cout << "Digit count: " << digitCount(number) << endl;
        cout << "Prime: " << (isPrime(number) ? "yes" : "no") << endl;

        cout << "\nContinue? (1 - yes, 0 - no): ";
        cin >> choice;
        cout << endl;
    }

    cout << "Program finished." << endl;
    return 0;
}