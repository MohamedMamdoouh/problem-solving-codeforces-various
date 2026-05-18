// Smallest Pair

#include <iostream>
#include <climits>
using namespace std;
 
void readArray(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }
}
 
int main()
{
    int arr[100];
    int n;
    cin >> n;
 
    while (n--)
    {
        int arrLen;
        cin >> arrLen;
        readArray(arr, arrLen);
 
        long long mini = LLONG_MAX;
 
        for (int i = 0; i < arrLen; i++)
        {
            for (int j = i + 1; j < arrLen; j++)
            {
                long long sum = arr[i] + arr[j] + j - i;
                if (sum < mini)
                    mini = sum;
            }
        }
        cout << mini << endl;
    }
 
    r