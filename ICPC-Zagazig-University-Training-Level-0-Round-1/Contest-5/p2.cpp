// Hermione And Maximizing Numbers

#include <bits/stdc++.h>
using namespace std;
 
string nextPermutation(string number)
{
 
    if (number.length() < 2)
        return "-1";
 
    int pivotIndex = -1;
    for (int i = number.length() - 2; i >= 0; i--)
    {
        if (number[i] < number[i + 1])
        {
            pivotIndex = i;
            break;
        }
    }
 
    if (pivotIndex == -1)
        return "-1";
 
    int replacementIndex;
    for (int j = number.length() - 1; j > pivotIndex; j--)
    {
        if (number[j] > number[pivotIndex])
        {
            replacementIndex = j;
            break;
        }
    }
 
    swap(number[pivotIndex], number[replacementIndex]);
    reverse(number.begin() + pivotIndex + 1, number.end());
 
    return number;
}
 
int main()
{
    int testCases;
    cin >> testCases;
 
    while (testCases--)
    {
        string n;
        cin >> n;
        cout << nextPermutation(n) << endl;
    }
 
    return 0;
}