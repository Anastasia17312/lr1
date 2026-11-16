#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int sumPos = 0;
    int countNeg = 0;
    int minVal = arr[0], minIdx = 0;
    int maxVal = arr[0], maxIdx = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] > 0) {
            sumPos += arr[i];
        }
        if (arr[i] < 0) {
            countNeg++;
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
    }

    cout << "Sum of positives: " << sumPos << endl;
    cout << "Count of negatives: " << countNeg << endl;
    cout << "Min: " << minVal << " (index " << minIdx << ")" << endl;
    cout << "Max: " << maxVal << " (index " << maxIdx << ")" << endl;

    cout << "Multiples of 3 (reverse): ";
    for (int i = N - 1; i >= 0; i--) {
        if (arr[i] % 3 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}