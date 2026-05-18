// Queue

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int queryCount;
    cin >> queryCount;
 
    queue<long long> queueValues;
 
    while (queryCount--) {
        string operation;
        cin >> operation;
 
        if (operation == "push") {
            long long value;
            cin >> value;
            queueValues.push(value);
        }
        else if (operation == "pop") {
            queueValues.pop();
        }
        else if (operation == "front") {
            cout << queueValues.front() << '\n';
        }
        else if (operation == "back") {
            cout << queueValues.back() << '\n';
        }
    }
 
    return 0;
}