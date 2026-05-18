// Bits Operation

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int q;
    long long n;
    cin >> q >> n;
 
    while (q--) {
        int type;
        cin >> type;
 
        if (type == 1) {
            long long x;
            cin >> x;
            n = n | x;
        }
        else if (type == 2) {
            long long x;
            cin >> x;
            n = n & x;
        }
        else if (type == 3) {
            long long x;
            cin >> x;
            n = n ^ x;
        }
        else {
            n = ~n;
        }
 
        cout << n << "\n";
    }
 
    return 0;
}