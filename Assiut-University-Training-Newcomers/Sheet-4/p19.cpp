// Max Split

#include <bits/stdc++.h>
using namespace std;
 
void maxSplit(string text)
{
    // LLRRLLLRRR
    int L = 0, R = 0, index = 0;
    string arrString[500];
    string myStr = "";
 
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'R')
        {
            R++;
            myStr.push_back('R');
        }
 
        else
        {
            L++;
            myStr.push_back('L');
        }
 
        if (L == R)
        {
            arrString[index] = myStr;
            myStr.clear();
            index++;
        }
    }
 
    cout << index << endl;
    for (int i = 0; i < index; i++)
    {
        cout << arrString[i] << endl;
    }
}
 
int main()
{
    string myStr;
    cin >> myStr;
 
    maxSplit(myStr);
 
    return 0;
}