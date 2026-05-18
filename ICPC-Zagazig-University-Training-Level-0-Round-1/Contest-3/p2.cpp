//  Print Characters

#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
 
    char ch = 'a';
 
    if (n % 2 != 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ch << " ";
        }
    }
 
    else
    {
 
        for (int i = 0; i < n - 1; i++)
        {
            cout << ch << " " ;
        }
 
        cout << ++ch;
        
    }
 
    return 0;
}