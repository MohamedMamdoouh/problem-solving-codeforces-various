// Keyboard

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./", input, res = "";
    char option;
 
    cin >> option >> input;
 
    for (int i = 0; i < input.length(); i++)
    {
        if (option == 'R')
            res.push_back(keyboard[keyboard.find(input[i]) - 1]);
 
        else
            res.push_back(keyboard[keyboard.find(input[i]) + 1]);
    }
 
    cout << res << endl;
 
}