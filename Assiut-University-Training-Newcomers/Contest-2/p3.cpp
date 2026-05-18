//  Finding Minimums

#include <bits/stdc++.h>
using namespace std;
 
int main()
 
{
    int numbers, group, value, minNum = INT_MAX, counter = 0;
 
    cin >> numbers >> group;
 
    for (int i = 0; i < numbers; i++)
    {
        cin >> value;
 
        minNum = min(minNum, value);
 
        counter++;
 
        if (counter == group || i == (numbers - 1))
        {
            cout << minNum << " ";
            counter = 0;
            minNum = INT_MAX;
        }
    }
}
 