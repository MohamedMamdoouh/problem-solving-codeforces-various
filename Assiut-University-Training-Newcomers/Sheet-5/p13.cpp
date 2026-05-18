// Distinct Numbers

#include <bits/stdc++.h>
using namespace std;
 
void readArray(int arr[], int &arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }
}
 
void printArray(int arr[], int &arrLength)
{
 
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}
 
int occuranceOfEveryElement(int arr[], int &arrLength)
{
    int freqArr[arrLength] = {0};
    int counter = 0;
 
    for (int i = 0; i < arrLength; i++)
    {
        for (int k = i; k < arrLength; k++)
        {
            if (arr[i] == arr[k])
                freqArr[i]++;
        }
    }
 
    for (int i = 0; i < arrLength; i++)
    {
        if (freqArr[i] == 1)
            counter++;
    }
    return counter;
}
 
int main()
{
    int arr[1000];
    int arrLength;
    cin >> arrLength;
    readArray(arr, arrLength);
    cout << occuranceOfEveryElement(arr, arrLength) << endl;
    return 0;
}