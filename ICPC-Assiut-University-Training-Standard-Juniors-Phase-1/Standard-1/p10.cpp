// The Grades

#include <bits/stdc++.h>
using namespace std;
 
bool compareByTotalGrade(pair<string, vector<int>> &a, pair<string, vector<int>> &b)
{
    if (a.second.front() != b.second.front())
        return a.second.front() > b.second.front();
 
    else
        return a.first < b.first;
}
 
int main()
{
 
    int n;
    cin >> n;
 
    vector<pair<string, vector<int>>> studentsGrades(n);
 
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        cin >> studentsGrades[i].first;
 
        for (int j = 0; j < 4; j++)
        {
            int x;
            cin >> x;
            studentsGrades[i].second.push_back(x);
            sum += x;
        }
        studentsGrades[i].second.insert(studentsGrades[i].second.begin(), sum);
    }
 
    sort(studentsGrades.begin(), studentsGrades.end(), compareByTotalGrade);
    for (int i = 0; i < n; i++)
    {
        cout << studentsGrades[i].first << " ";
 
        for (int j = 0; j < 5; j++)
        {
            cout << studentsGrades[i].second[j] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}