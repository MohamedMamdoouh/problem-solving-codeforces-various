// Two Squares

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    double l, s1, s2, q;
    int num;
    cin >> l >> s1 >> s2 >> num;
 
    for (int i = 0; i < num; i++)
    {
        cin >> q;
 
        double time = sqrt(2) * (l - sqrt(q)) / (s2 - s1);
        cout << fixed << setprecision(6) << abs(time) << endl;
    }
 
    return 0;
}