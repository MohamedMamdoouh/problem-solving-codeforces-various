// binary search STL

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, q;
    cin >> n >> q;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    sort(a.begin(), a.end());
 
    while (q--) {
        string op;
        int x;
        cin >> op >> x;
 
        if (op == "lower_bound") {
            auto it = lower_bound(a.begin(), a.end(), x);
 
            if (it == a.end())
                cout << -1 << '\n';
            else
                cout << *it << '\n';
        }
        else if (op == "upper_bound") {
            auto it = upper_bound(a.begin(), a.end(), x);
 
            if (it == a.end())
                cout << -1 << '\n';
            else
                cout << *it << '\n';
        }
        else if (op == "binary_search") {
            if (binary_search(a.begin(), a.end(), x))
                cout << "found\n";
            else
                cout << "not found\n";
        }
    }
 
    return 0;
}