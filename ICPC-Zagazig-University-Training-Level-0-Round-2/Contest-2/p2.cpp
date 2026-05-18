// Soltan's Paper

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int testCases;
    cin >> testCases;
    string word = "";
    char arr[8][8];
 
    while (testCases--)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
 
                if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
                    word.push_back(arr[i][j]);
            }
        }
        
        cout << word << endl;
        word = "";
    }
 
    return 0;
}