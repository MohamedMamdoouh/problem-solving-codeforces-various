// Print Digits using Recursion

#include <bits/stdc++.h>
using namespace std;
 
void recu_print(string text, int i = 0)
{
    if (i >= text.length())
        return;
 
    if (text.length() - i >= 1)
        cout << text[i] << " ";
 
    recu_print(text, ++i);
}
 
int main()
{
    int t, n;
    string text;
    cin >> t;
 
    while (t--)
    {
        cin >> n;
        text = to_string(n);
        recu_print(text);
        cout << endl;
    }
 
    return 0;
}