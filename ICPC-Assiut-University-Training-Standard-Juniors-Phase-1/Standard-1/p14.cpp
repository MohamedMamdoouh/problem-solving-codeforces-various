// Merge Intervals

#include <bits/stdc++.h>
using namespace std;
 
bool isOverlapBetweenTwoPeriods(pair<long long, long long> p1, pair<long long, long long> p2)
{
    return !(p2.second < p1.first || p1.second < p2.first);
}
 
pair<long long, long long> MergeTwoPeriods(pair<long long, long long> p1, pair<long long, long long> p2)
{
    return {min(p1.first, p2.first), max(p1.second, p2.second)};
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    long long n;
    cin >> n;
 
    vector<pair<long long, long long>> VectorOfPairs(n), result(n);
 
    for (long long i = 0; i < n; i++)
    {
        cin >> VectorOfPairs[i].first >> VectorOfPairs[i].second;
    }
 
    sort(VectorOfPairs.begin(), VectorOfPairs.end());
 
    vector<pair<long long, long long>> mergedPeriod;
    pair<long long, long long> currentPeriod = VectorOfPairs[0];
 
    for (int i = 1; i < VectorOfPairs.size(); i++)
    {
        if (isOverlapBetweenTwoPeriods(currentPeriod, VectorOfPairs[i]))
        {
            currentPeriod = MergeTwoPeriods(currentPeriod, VectorOfPairs[i]);
        }
 
        else
        {
            mergedPeriod.push_back(currentPeriod);
            currentPeriod = VectorOfPairs[i];
        }
    }
 
    mergedPeriod.push_back(currentPeriod);
 
    for (auto &period : mergedPeriod)
    {
        cout << period.first << " " << period.second << endl;
    }
 
    /*
    1 3
    2 4
    6 9
    8 10
    9 12
    */
 
    return 0;
}