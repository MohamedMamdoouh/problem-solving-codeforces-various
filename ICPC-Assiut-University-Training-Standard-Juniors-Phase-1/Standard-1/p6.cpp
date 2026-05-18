//  update range

// for test
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(0);
    cout.sync_with_stdio(0);
 
    int n, q;
    cin >> n >> q;
    
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Difference array to handle range updates
    vector<long long> diff(n + 1, 0);
 
    // Processing each query
    for (int i = 0; i < q; i++) {
        int L, R, val;
        cin >> L >> R >> val;
        diff[L - 1] += val; // Increment start of the range (1-indexed)
        if (R < n) {
            diff[R] -= val; // Decrement element right after the range
        }
    }
 
    // Apply the difference array to the original array using prefix sum
    long long current_addition = 0;
    for (int i = 0; i < n; i++) {
        current_addition += diff[i]; // Accumulate the effect of the range updates
        arr[i] += current_addition; // Apply the accumulated addition to the array
    }
 
    // Output the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 
    return 0;
}