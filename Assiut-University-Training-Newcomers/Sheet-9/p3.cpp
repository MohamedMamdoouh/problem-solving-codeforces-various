// Dragons

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int s, n, xi, yi;
    cin >> s >> n;
 
    vector<pair<int, int>> game;
    for (int i = 0; i < n; i++)
    {
        cin >> xi >> yi;
        game.push_back({xi, yi});
    }
 
    sort(game.begin(), game.end());
 
    for (int i = 0; i < n; i++)
    {
        if (s > game[i].first)
            s += game[i].second;
 
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
 
    cout << "YES\n";
 
    return 0;
}