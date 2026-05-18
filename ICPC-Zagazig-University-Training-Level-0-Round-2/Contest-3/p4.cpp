//  Soltan's New Keyboard

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int numOfWords;
    cin >> numOfWords;
 
    // consume the newline character after numOfWords
    cin.ignore();
 
    string strinToPrint, order, resultOutput = "";
    char charOrder;
    bool flagCapsLock = 0;
    getline(cin, strinToPrint);
 
    int numOfKeysPressed;
    cin >> numOfKeysPressed;
 
    if (numOfKeysPressed < strinToPrint.length())
    {
        cout << "Incorrect\n";
        return 0;
    }
 
    for (int i = 0; i < numOfKeysPressed; i++)
    {
        cin >> order;
        charOrder = order[0];
 
        if (charOrder >= 'a' && charOrder <= 'z')
        {
            if (flagCapsLock)
                resultOutput.push_back(toupper(charOrder));
 
            else
                resultOutput.push_back(charOrder);
        }
        else if (charOrder == 'S')
        {
            resultOutput.push_back(' ');
        }
        else if (charOrder == 'B')
        {
            if (!resultOutput.empty())
                resultOutput.pop_back();
        }
        else if (charOrder == 'C')
        {
            flagCapsLock = !flagCapsLock;
        }
    }
 
    if (resultOutput == strinToPrint)
        cout << "Correct\n";
 
    else
        cout << "Incorrect\n";
 
    return 0;
}