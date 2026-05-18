// Soltan and Card Game

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
 
    long long ashrafScore = 0, yousefScore = 0;
 
    long long leftIndex = 0, rightIndex = n - 1;
 
    for (long long i = 0; i < n / 2; ++i)
    {
        long long leftCard, rightCard;
        cin >> leftCard >> rightCard;
 
        ashrafScore += rightCard;
 
        yousefScore += leftCard;
    }
 
    if (ashrafScore > yousefScore)
    {
        cout << "Ashraf wins\n";
    }
    else if (yousefScore > ashrafScore)
    {
        cout << "Yousef wins\n";
    }
    else
    {
        std::cout << "Draw\n";
    }
 
    return 0;
}
