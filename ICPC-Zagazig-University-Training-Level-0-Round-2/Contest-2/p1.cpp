// Soltan plays with the cursor

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int testCases;
    cin >> testCases;
 
    while (testCases--)
    {
        string pinCode;
        cin >> pinCode;
        int currentCursor = 1, counter = 0;
 
        for (int i = 0; i < 4; i++)
        {
 
            if (pinCode[i] - '0' == currentCursor)
                counter++;
 
            else
            {
                if (pinCode[i] - '0' == 0)
                {
                    counter += abs(10 - currentCursor) + 1;
                    currentCursor = pinCode[i] - '0';
                }
 
                else
                {
                    if (currentCursor == 0)
                    {
                        counter += abs(pinCode[i] - '0' - 10) + 1;
                        currentCursor = pinCode[i] - '0';
                    }
 
                    else
                    {
                        counter += abs(pinCode[i] - '0' - currentCursor) + 1;
                        currentCursor = pinCode[i] - '0';
                    }
                }
            }
        }
 
        cout << counter << endl;
    }
 
    return 0;
}