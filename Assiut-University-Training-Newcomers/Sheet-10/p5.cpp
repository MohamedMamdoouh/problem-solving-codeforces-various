// Construct The Sum

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t, n, s;
    cin >> t;
 
    while (t--)
    {
        vector<long long> setOfNumbers;
        cin >> n >> s;
 
        while (n > 0 && s > 0)
        {
            if (n <= s)
            {
                s -= n;
                setOfNumbers.push_back(n);
            }
            n--;
        }
 
        if (s > 0)
        {
            cout << "-1";
        }
 
        else
        {
            cout << setOfNumbers.size() << " ";
 
            for (int i = 0; i < setOfNumbers.size(); i++)
            {
                if (i != setOfNumbers.size() - 1)
                    cout << setOfNumbers[i] << " ";
 
                else
                    cout << setOfNumbers[i];
            }
        }
 
        cout << endl;
    }
 
    return 0;
}