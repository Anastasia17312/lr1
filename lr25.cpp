#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Enter M and N: ";
    cin >> M >> N;

    int a[50][50];

    cout << "Enter matrix elements: " << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nRow sums:" << endl;
    int maxRowSum = -2147483648;
    int maxRowIdx = 0;

    for (int i = 0; i < M; i++) {
        int rowSum = 0;
        for (int j = 0; j < N; j++) {
            rowSum += a[i][j];
        }
        cout << "Row " << i << ": " << rowSum << endl;
        if (rowSum > maxRowSum) {
            maxRowSum = rowSum;
            maxRowIdx = i;
        }
    }

    cout << "\nCol sums:" << endl;
    for (int j = 0; j < N; j++) {
        int colSum = 0;
        for (int i = 0; i < M; i++) {
            colSum += a[i][j];
        }
        cout << "Col " << j << ": " << colSum << endl;
    }

    cout << "\nRow with max sum: " << maxRowIdx << endl;

    cout << "\nTransposed matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    cout << "\nSaddle points:" << endl;
    bool foundSaddle = false;
    for (int i = 0; i < M; i++) {
        int minRowVal = a[i][0];
        int minColIdx = 0;
        for (int j = 1; j < N; j++) {
            if (a[i][j] < minRowVal) {
                minRowVal = a[i][j];
                minColIdx = j;
            }
        }

        bool isSaddle = true;
        for (int k = 0; k < M; k++) {
            if (a[k][minColIdx] > minRowVal) {
                isSaddle = false;
                break;
            }
        }

        if (isSaddle) {
            cout << "Saddle point at (" << i << ", " << minColIdx << "): " << minRowVal << endl;
            foundSaddle = true;
        }
    }

    if (!foundSaddle) {
        cout << "No saddle points found." << endl;
    }

    return 0;
}