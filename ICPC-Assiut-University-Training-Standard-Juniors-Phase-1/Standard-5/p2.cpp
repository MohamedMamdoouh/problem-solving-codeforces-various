// Bitmask Operation

#include <iostream>
 
using namespace std;
 
int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int q, n;
    if (!(cin >> q >> n)) return 0;
 
    for (int i = 0; i < q; ++i) {
        int type, x;
        cin >> type >> x;
 
        // 1U << x safely creates our bitmask even if x == 31
        if (type == 1) {
            // Print the value of bit x
            cout << ((n >> x) & 1) << "\n";
        } 
        else if (type == 2) {
            // Change bit x to 1
            n |= (1U << x);
            cout << n << "\n";
        } 
        else if (type == 3) {
            // Change bit x to 0
            n &= ~(1U << x);
            cout << n << "\n";
        } 
        else if (type == 4) {
            // Toggle bit x
            n ^= (1U << x);
            cout << n << "\n";
        }
    }
 
    return 0;
}