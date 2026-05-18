// ) Check Code

#include <bits/stdc++.h>
using namespace std;
 
void readArray(int arr[], int &arrLength)
{
 
    cin >> arrLength;
 
    for (int i = 0; i < arrLength; i++)
    {
        cin >> arr[i];
    }
}
 
int main()
{
 
    int a, b;
    string s;
 
    cin >> a >> b;
    cin >> s;
 
    if (s[a] != '-')
    {
        cout << "No\n";
        return 0;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (i == a)
                continue;
 
            else if (s[i] >= '0' && s[i] <= '9')
                ;
 
            else
            {
                cout << "No\n";
                return 0;
            }
        }
 
        cout << "Yes\n";
        return 0;
    }
}