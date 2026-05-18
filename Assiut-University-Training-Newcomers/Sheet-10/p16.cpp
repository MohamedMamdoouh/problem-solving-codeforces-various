// No Time for Dragons

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int size, n1, n2;
    cin >> size;
 
    vector<pair<long long, pair<long long, long long>>> Dragons(size);
 
    for (int i = 0; i < size; i++)
    {
        cin >> n1 >> n2;
        Dragons[i].first = (n1 - n2);
        Dragons[i].second = {n1, n2};
    }
 
    sort(Dragons.begin(), Dragons.end());
 
    long long needed = Dragons[size - 1].second.first;
    long long AliveSoldiers = Dragons[size - 1].first;
 
    for (int i = size - 2; i >= 0; i--)
    {
        if (AliveSoldiers < Dragons[i].second.first)
        {
            needed += Dragons[i].second.first - AliveSoldiers;
            AliveSoldiers = Dragons[i].first;
        }
        else
        {
            AliveSoldiers -= Dragons[i].second.second;
        }
    }
 
    cout << needed << endl;
 
    return 0;
}