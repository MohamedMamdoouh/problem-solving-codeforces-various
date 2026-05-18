// Easter Eggs

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    /*
     "R" stands for red,
     "O" stands for orange,
     "Y" stands for yellow,
     "G" stands for green,
     "B" stands for blue,
     "I" stands for indigo,
     "V" stands for violet.
    */
 
    int n;
    cin >> n;
 
    cout << "ROYGBIV";
    n -= 7;
 
    char arr[] = {'G', 'B', 'I', 'V'};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i % 4];
    }
 
}