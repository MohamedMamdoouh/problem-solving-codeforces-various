// Way Too Long Words

#include <bits/stdc++.h>
using namespace std;
 
void tooLongWords(string word[100], int &arrLength_numberOfTestCases)
{
    for (int i = 0; i < arrLength_numberOfTestCases; i++)
    {
        cin >> word[i];
    }
 
    for (int i = 0; i < arrLength_numberOfTestCases; i++)
    {
 
        if (word[i].length() <= 10)
            cout << word[i] << endl;
 
        else if (word[i].length() > 10)
        {
            int lastIndex = word[i].length() - 1;
            int numberOfInBetweenChar = lastIndex - 1;
            cout << word[i][0] << numberOfInBetweenChar << word[i][lastIndex] << endl;
        }
    }
}
 
int main()
{
    string word[100];
    int arrLength;
    cin >> arrLength;
 
    tooLongWords(word, arrLength);
 
}