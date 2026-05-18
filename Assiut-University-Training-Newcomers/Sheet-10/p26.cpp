// Triangle

#include <bits/stdc++.h>
using namespace std;
 
int getSquareDistanceBetweenTwoPoints(pair<int, int> P1, pair<int, int> P2)
{
    return (P1.first - P2.first) * (P1.first - P2.first) +
           (P1.second - P2.second) * (P1.second - P2.second);
}
 
bool isRightAngle(pair<int, int> p1, pair<int, int> p2, pair<int, int> p3)
{
    if ((p1.first == p2.first && p1.second == p2.second) || (p1.first == p3.first && p1.second == p3.second) || (p2.first == p3.first && p2.second == p3.second))
        return false;
 
    int d1 = getSquareDistanceBetweenTwoPoints(p1, p2);
    int d2 = getSquareDistanceBetweenTwoPoints(p1, p3);
    int d3 = getSquareDistanceBetweenTwoPoints(p2, p3);
 
    return (d1 + d2 == d3 || d1 + d3 == d2 || d2 + d3 == d1);
}
 
bool checkMoves(pair<int, int> p1, pair<int, int> p2, pair<int, int> p3)
{
    // left, right, up, down
    int xDirection[] = {-1, 1, 0, 0};
    int yDirection[] = {0, 0, 1, -1};
 
    for (int i = 0; i < 4; i++)
    {
        if (isRightAngle({p1.first + xDirection[i], p1.second + yDirection[i]}, p2, p3))
            return true;
 
        if (isRightAngle(p1, {p2.first + xDirection[i], p2.second + yDirection[i]}, p3))
            return true;
 
        if (isRightAngle(p1, p2, {p3.first + xDirection[i], p3.second + yDirection[i]}))
            return true;
    }
 
    return false;
}
 
int main()
{
    pair<int, int> p1, p2, p3;
 
    cin >> p1.first >> p1.second;
    cin >> p2.first >> p2.second;
    cin >> p3.first >> p3.second;
 
    if (isRightAngle(p1, p2, p3))
        cout << "RIGHT\n";
 
    else if (checkMoves(p1, p2, p3))
        cout << "ALMOST\n";
 
    else
        cout << "NEITHER\n";
 
    return 0;
}