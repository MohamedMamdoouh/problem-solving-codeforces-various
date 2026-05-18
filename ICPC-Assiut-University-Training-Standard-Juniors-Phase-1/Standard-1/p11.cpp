//  Sorting pairs

#include <bits/stdc++.h>
using namespace std;
 
bool compareBySalary(pair<string, int> &a, pair<string, int> &b)
{
    if (a.second != b.second)
        return a.second > b.second;
 
    else
        return a.first < b.first;
}
 
int main()
{
 
    int n;
    cin >> n;
 
    vector<pair<string, int>> salaries(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> salaries[i].first;
        cin >> salaries[i].second;
    }
 
    sort(salaries.begin(), salaries.end(), compareBySalary);
 
    for (pair<string, int> &item : salaries)
    {
        cout << item.first << " " << item.second << endl;
    }
 
    return 0;
}