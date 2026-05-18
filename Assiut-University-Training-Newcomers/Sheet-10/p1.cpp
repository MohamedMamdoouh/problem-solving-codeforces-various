// Palindromes Replace

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();

    // First pass: resolve conflicts and fill from known characters
    for (int i = 0; i < n / 2; i++) {
        int j = n - 1 - i;

        if (s[i] == '?' && s[j] == '?') {
            s[i] = s[j] = 'a';
        }
        else if (s[i] == '?') {
            s[i] = s[j];
        }
        else if (s[j] == '?') {
            s[j] = s[i];
        }
        else if (s[i] != s[j]) {
            cout << -1;
            return 0;
        }
    }

    // If odd length, handle middle character
    if (n % 2 == 1 && s[n / 2] == '?') {
        s[n / 2] = 'a';
    }

    cout << s << "\n";
    return 0;
}