// Coins

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    vector<int> vWeight(3, 0);
    string input;
 
    for (int i = 0; i < 3; i++)
    {
        cin >> input;
 
        if (input[1] == '>')
        {
            if (input[0] == 'A')
                vWeight[0]++;
 
            else if (input[0] == 'B')
                vWeight[1]++;
 
            else if (input[0] == 'C')
                vWeight[2]++;
 
            if (input[2] == 'A')
                vWeight[0]--;
 
            else if (input[2] == 'B')
                vWeight[1]--;
 
            else if (input[2] == 'C')
                vWeight[2]--;
        }
 
        else
        {
            if (input[0] == 'A')
                vWeight[0]--;
 
            else if (input[0] == 'B')
                vWeight[1]--;
 
            else if (input[0] == 'C')
                vWeight[2]--;
 
            if (input[2] == 'A')
                vWeight[0]++;
 
            else if (input[2] == 'B')
                vWeight[1]++;
 
            else if (input[2] == 'C')
                vWeight[2]++;
        }
    }
 
    vector<pair<int, char>> vCoins = {{vWeight[0], 'A'},
                                      {vWeight[1], 'B'},
                                      {vWeight[2], 'C'}};
 
    sort(vCoins.begin(), vCoins.end());
 
    if (vCoins[0].first == vCoins[1].first || vCoins[1].first == vCoins[2].first)
    {
        cout << "Impossible\n";
    }
 
    else
    {
        for(const auto &Coin : vCoins)
        {
            cout << Coin.second;
        }
    }
 
    return 0;
}