// Number of matches

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int N, current, maxCounter = 0, counter = 0;
    bool flag = 0;
 
    cin >> N;
 
    for (int i = 0; i < N; i++)
    {
        cin >> current;
 
        if (current > 0)
        {
            counter++;
            flag = 1;
            maxCounter = max(counter, maxCounter);
        }
 
        else if (current == 0)
            counter = 0;
    }
 
    if (flag == 0)
        cout << "Bad Luck" << endl;
 
    else
        cout << maxCounter << endl;
}