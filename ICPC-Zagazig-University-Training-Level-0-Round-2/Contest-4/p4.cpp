// Soltan and Corrupted Images

#include <iostream>
using namespace std;
 
bool isGood(char arr[50][50], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        if (arr[0][j] != '1' || arr[rows - 1][j] != '1') {
            return false;
        }
    }
    for (int i = 0; i < rows; i++) {
        if (arr[i][0] != '1' || arr[i][cols - 1] != '1') {
            return false;
        }
    }
    return true;
}
 
int minMovesToFix(char arr[50][50], int rows, int cols) {
    if (isGood(arr, rows, cols))
        return 0;
 
    int zerosBoundary = 0, counterOfOnes = 0;
 
    for (int i = 0; i < cols; i++) {
        if (arr[0][i] == '0')
            zerosBoundary++;
        if (arr[rows - 1][i] == '0')
            zerosBoundary++;
    }
 
    for (int i = 1; i < rows - 1; i++) {
        if (arr[i][0] == '0')
            zerosBoundary++;
        if (arr[i][cols - 1] == '0')
            zerosBoundary++;
        for (int j = 1; j < cols - 1; j++) {
            if (arr[i][j] == '1')
                counterOfOnes++;
        }
    }
 
    if (zerosBoundary <= counterOfOnes) {
        return zerosBoundary;
    } else {
        return -1;
    }
}
 
int main() {
    int testCases;
    cin >> testCases;
 
    while (testCases--) {
        int rows, cols;
        cin >> rows >> cols;
        char arr[50][50];
 
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> arr[i][j];
            }
        }
 
        cout << minMovesToFix(arr, rows, cols) << endl;
    }
 
    return 0;
}