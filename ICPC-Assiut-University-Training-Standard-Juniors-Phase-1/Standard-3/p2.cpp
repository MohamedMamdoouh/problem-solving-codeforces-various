//  Frinds and money

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N, q;
    cin >> N >> q;
 
    unordered_map<string, long long> money;
 
    for (int i = 0; i < N; i++) {
        string name;
        long long val;
        cin >> name >> val;
        money[name] = val;
    }
 
    while (q--) {
        int type;
        cin >> type;
 
        if (type == 1) {
            string x;
            long long y;
            cin >> x >> y;
            money[x] += y;
        }
        else {
            string x;
            cin >> x;
            cout << money[x] << "\n";
        }
    }
 
    return 0;
}