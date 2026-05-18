// Some Sums

#include <bits/stdc++.h>
using namespace std;
 
int arr[10];
 
bool isDigitsBetween(int num, int A, int B)
{
    int digit = 0;
    int i = 0;
    int sumOfDigits = 0;
 
    while (num)
    {
        digit = num % 10;
        arr[i] = digit;
        i++;
        num /= 10;
    }
 
    for (int k = 0; k < i; k++)
    {
        sumOfDigits += arr[k];
    }
 
    if (sumOfDigits >= A && sumOfDigits <= B)
        return 1;
    else
        return 0;
}
 
int someSum(int num, int A, int B)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (isDigitsBetween(i, A, B))
            sum += i;
    }
 
    return sum;
}
 
int main()
{
 
 
    int n, a, b;
    cin >> n >> a >> b;
 
    cout << someSum(n, a, b);
    return 0;
}