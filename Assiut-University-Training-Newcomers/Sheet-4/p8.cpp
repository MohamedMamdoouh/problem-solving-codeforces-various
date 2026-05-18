// Good or Bad

#include <bits/stdc++.h>
using namespace std;
 
 
void badOrGood(string word[100], int &arrLength_numberOfTestCases)
{
    // read array of string
    for (int i = 0; i < arrLength_numberOfTestCases; i++)
    {
        cin >> word[i];
    }
 
    for (int i = 0; i < arrLength_numberOfTestCases; i++)
    {
 
        if ((word[i].find("010") != string::npos) || (word[i].find("101") != string::npos))
            cout << "Good\n";
 
        else
            cout << "Bad\n";
    }
}
 
int main()
{
 
    int arrLength;
    cin >> arrLength;
    string arr[100];
 
    badOrGood(arr, arrLength);
}