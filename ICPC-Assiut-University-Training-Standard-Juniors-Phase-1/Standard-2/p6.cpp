// Deque

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int queryCount;
    cin >> queryCount;
 
    deque<long long> dq;
 
    while (queryCount--) {
        string operation;
        cin >> operation;
 
        if (operation == "push_back") {
            long long value;
            cin >> value;
            dq.push_back(value);
        }
        else if (operation == "push_front") {
            long long value;
            cin >> value;
            dq.push_front(value);
        }
        else if (operation == "pop_front") {
            dq.pop_front();
        }
        else if (operation == "pop_back") {
            dq.pop_back();
        }
        else if (operation == "front") {
            cout << dq.front() << '\n';
        }
        else if (operation == "back") {
            cout << dq.back() << '\n';
        }
        else if (operation == "print") {
            int index;
            cin >> index;
            cout << dq[index - 1] << '\n';
        }
    }
 
    return 0;
}