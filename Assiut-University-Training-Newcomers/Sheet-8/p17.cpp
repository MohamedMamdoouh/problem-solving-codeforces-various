// Night at the Museum

#include <bits/stdc++.h>
using namespace std;
 
// Distance between points x and y on the circle of length l (26 in our case) is:
// min(|x - y|, l - |x - y|
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string s;
    int counter = 0;
    cin >> s;
    char ch = 'a';
    
    for (int i = 0; i < s.length(); i++)
    {
        counter += min(abs(ch - s[i]), 26 - abs(ch - s[i]));
        ch = s[i];
    }
 
    cout << counter << endl;
    
 
    return 0;
}