//  String Functions

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, query;
    cin >> n >> query;
 
    string txt;
    cin >> txt;
 
    while (query--) {
        string op;
        cin >> op;
 
        if (op == "pop_back") {
            txt.pop_back();
        }
        else if (op == "front") {
            cout << txt.front() << '\n';
        }
        else if (op == "back") {
            cout << txt.back() << '\n';
        }
        else if (op == "sort") {
            int x, y;
            cin >> x >> y;
            if (x > y) swap(x, y);
 
            sort(txt.begin() + x - 1, txt.begin() + y);
        }
        else if (op == "reverse") {
            int x, y;
            cin >> x >> y;
            if (x > y) swap(x, y);
 
            reverse(txt.begin() + x - 1, txt.begin() + y);
        }
        else if (op == "print") {
            int pos;
            cin >> pos;
 
            cout << txt[pos - 1] << '\n';
        }
        else if (op == "substr") {
            int x, y;
            cin >> x >> y;
            if (x > y) swap(x, y);
 
            cout << txt.substr(x - 1, y - x + 1) << '\n';
        }
        else if (op == "push_back") {
            char v;
            cin >> v;
 
            txt.push_back(v);
        }
    }
 
    return 0;
}