// Sequence of Numbers and Sum

#include <bits/stdc++.h>
using namespace std;
 
void sequence(int arr[1000], int arr2[1000])
{
    int i = 0;
    int num1 = 1;
    int num2 = 1;
    int sum = 0;
 
    while (num1 > 0 && num2 > 0)
    {
        cin >> num1 >> num2;
 
        if (num1 > num2)
            swap(num1, num2);
 
        arr[i] = num1;
        arr2[i] = num2;
        i++;
    }
 
    for (int k = 0; k < i - 1; k++)
    {
        for (int j = arr[k]; j <= arr2[k]; j++)
        {
            cout << j << " ";
            sum += j;
        }
        cout << " sum =" << sum << endl;
        sum = 0;
    }
}
 
int main()
{
    int arr[1000];
    int arr2[1000];
 
    sequence(arr, arr2);
    return 0;
}