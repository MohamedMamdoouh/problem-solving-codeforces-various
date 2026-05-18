// Hady Rides the Train

#include <bits/stdc++.h>
using namespace std;
 
int main()
 
{
 
    long long seat;
    cin >> seat;
 
    long long row, col;
    row = seat / 4;
 
    if (row % 2 == 0)
        col = seat % 4;
    else
        col = 3 - (seat % 4);
 
    cout << row << " " << col << endl;
}