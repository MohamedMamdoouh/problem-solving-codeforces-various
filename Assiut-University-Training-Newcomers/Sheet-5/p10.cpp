// Average

#include <bits/stdc++.h>
using namespace std;
 
double sumOfArray(float arr[], int &arrLength)
{
 
    double sum = 0;
 
    for (int i = 0; i < arrLength; i++)
    {
        sum += arr[i];
    }
    return sum;
}
 
double averageOfArray(float arr[], int arrLength)
{
    return (double)(sumOfArray(arr, arrLength) / arrLength);
}
 
void readArray(float arr[], int &arrLength)
{
 
    cin >> arrLength;
 
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }
}
 
int main()
{
 
    float arr[10000];
    int arrLength;
 
    readArray(arr, arrLength);
    float sum = sumOfArray(arr, arrLength);
    float avg = averageOfArray(arr, arrLength);
 
    cout << fixed << setprecision(6) << avg << endl;
 
    return 0;
}