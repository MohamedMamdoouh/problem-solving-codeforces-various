//  Max Subsequence

#include <bits/stdc++.h>
using namespace std;
 
int maxSub(int number, string text)
{
    int max = 0;
    for (int i = 0; i < number; i++)
    {
        if (text[i] != text[i + 1])
            max++;
    }
    return max;
}
 
int main()
{
    int number;
    string text;
    cin >> number >> text;
 
    cout << maxSub(number, text);
}