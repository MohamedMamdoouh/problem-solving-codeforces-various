//  Next Element

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    vector<int> nextGreater(n + 1, -1);
    stack<int> st;
 
    // Build next greater element
    for (int i = n; i >= 1; i--) {
        while (!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
 
        if (!st.empty()) {
            nextGreater[i] = st.top();
        }
 
        st.push(i);
    }
 
    int q;
    cin >> q;
 
    while (q--) {
        int i;
        cin >> i;
        cout << nextGreater[i] << '\n';
    }
 
    return 0;
}