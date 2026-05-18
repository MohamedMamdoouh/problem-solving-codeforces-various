// permutations

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int stringLength, queryCount;
    cin >> stringLength >> queryCount;
 
    string currentString;
    cin >> currentString;
 
    while (queryCount--) {
        string queryType;
        int steps;
        cin >> queryType >> steps;
 
        if (queryType == "next_permutation") {
            while (steps--) {
                next_permutation(currentString.begin(), currentString.end());
            }
        }
        else if (queryType == "prev_permutation") {
            while (steps--) {
                prev_permutation(currentString.begin(), currentString.end());
            }
        }
 
        cout << currentString << '\n';
    }
 
    return 0;
}