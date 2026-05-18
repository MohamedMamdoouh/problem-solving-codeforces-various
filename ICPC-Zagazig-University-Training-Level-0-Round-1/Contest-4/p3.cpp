// Technical Issue

#include <bits/stdc++.h>
using namespace std;
 
bool hasDuplicates(int arr[], int size) {
    unordered_set<int> seen;
    for (int i = 0; i < size; ++i) {
        if (seen.find(arr[i]) != seen.end())
            return true;
        else
            seen.insert(arr[i]);
    }
    return false;
}
 
int main() {
    int testCases, numOfTeams;
    cin >> testCases;
 
    while (testCases--) {
        cin >> numOfTeams;
        string teamNames[numOfTeams];
        int score[numOfTeams], time[numOfTeams];
 
        for (int i = 0; i < numOfTeams; i++) {
            cin >> teamNames[i] >> score[i] >> time[i];
        }
 
        int maxScore = *max_element(score, score + numOfTeams);
 
        // Find the index of the team with the highest score
        int maxScoreIndex = -1;
        for (int i = 0; i < numOfTeams; ++i) {
            if (score[i] == maxScore) {
                maxScoreIndex = i;
                break;
            }
        }
 
        if (!hasDuplicates(score, numOfTeams) && maxScoreIndex != -1)
            cout << teamNames[maxScoreIndex];
        else {
            // Find the team with the minimum time among those with the maximum score
            int minTime = INT_MAX;
            string winner;
            for (int i = 0; i < numOfTeams; ++i) {
                if (score[i] == maxScore && time[i] < minTime) {
                    minTime = time[i];
                    winner = teamNames[i];
                }
            }
            cout << winner;
        }
 
        cout << endl;
    }
 
    return 0;
}