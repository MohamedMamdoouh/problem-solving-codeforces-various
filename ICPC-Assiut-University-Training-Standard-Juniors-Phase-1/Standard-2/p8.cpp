//  priority queue minimum

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int queryCount;
    cin >> queryCount;
 
    multiset<long long> values;
 
    while (queryCount--) {
        string operation;
        cin >> operation;
 
        if (operation == "push") {
            long long value;
            cin >> value;
            values.insert(value);
        }
        else if (operation == "top") {
            cout << *values.begin() << '\n';
        }
        else if (operation == "pop") {
            values.erase(values.begin());
        }
    }
 
    return 0;
}