// Grade Allocation

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases, numOfStudents, maxGrade, grade, sum = 0;
    cin >> testCases;
 
    while (testCases--)
    {
        cin >> numOfStudents >> maxGrade;
 
        for (int i = 0; i < numOfStudents; i++)
        {
            cin >> grade;
            sum += grade;
        }
 
        cout << min(sum, maxGrade) << endl;
        sum = 0;
    }
}