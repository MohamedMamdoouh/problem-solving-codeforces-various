// Stack

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int queryCount;
    cin >> queryCount;
 
    stack<long long> stackValues;
 
    while (queryCount--) {
        string operation;
        cin >> operation;
 
        if (operation == "push") {
            long long value;
            cin >> value;
            stackValues.push(value);
        }
        else if (operation == "pop") {
            stackValues.pop();
        }
        else if (operation == "top") {
            cout << stackValues.top() << '\n';
        }
    }
 
    return 0;
}