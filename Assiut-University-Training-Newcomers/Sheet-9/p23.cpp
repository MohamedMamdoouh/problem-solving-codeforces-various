// Football

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    unordered_map <string, int> goalCount;
    string team;
 
    for (int i = 0; i < n; ++i)
    {
        cin >> team;
        goalCount[team]++;
    }
 
    string winningTeam;
    int maxGoals = 0;
 
    for (const auto &pair : goalCount)
    {
        if (pair.second > maxGoals)
        {
            maxGoals = pair.second;
            winningTeam = pair.first;
        }
    }
 
    cout << winningTeam << endl;
 
    return 0;
}