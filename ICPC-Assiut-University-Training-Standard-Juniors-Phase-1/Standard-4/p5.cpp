// Maximum distinct

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N, k;
    cin >> N >> k;
 
    string s;
    cin >> s;
 
    vector<int> freq(26, 0);
    int distinct = 0;
 
    // first window
    for (int i = 0; i < k; i++) {
        if (freq[s[i] - 'a'] == 0)
            distinct++;
        freq[s[i] - 'a']++;
    }
 
    int ans = distinct;
 
    // sliding
    for (int i = k; i < N; i++) {
        // remove left char
        int left = s[i - k] - 'a';
        freq[left]--;
        if (freq[left] == 0)
            distinct--;
 
        // add new char
        int right = s[i] - 'a';
        if (freq[right] == 0)
            distinct++;
        freq[right]++;
 
        ans = max(ans, distinct);
    }
 
    cout << ans << "\n";
 
    return 0;
}