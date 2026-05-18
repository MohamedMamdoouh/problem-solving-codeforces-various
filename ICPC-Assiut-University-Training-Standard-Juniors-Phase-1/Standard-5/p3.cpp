// Bitmask Operation (hard)

#include <iostream>
#include <cstdint>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int32_t n;
    int q;
    
    if (!(cin >> n >> q)) return 0;
 
    while (q--) {
        int type;
        cin >> type;
 
        if (type == 1) {
            n = (uint32_t)n | ((uint32_t)n + 1);
            cout << n << "\n";
        } 
        else if (type == 2) {
            n = (uint32_t)n & ((uint32_t)n - 1);
            cout << n << "\n";
        } 
        else if (type == 3) {
            n = (uint32_t)n | ((uint32_t)n - 1);
            cout << n << "\n";
        } 
        else if (type == 4) {
            n = (uint32_t)n & ((uint32_t)n + 1);
            cout << n << "\n";
        } 
        else if (type == 5) {
            if (n > 0 && ((uint32_t)n & ((uint32_t)n - 1)) == 0) {
                cout << "is power of two\n";
            } else {
                cout << "not power of two\n";
            }
        }
    }
 
    return 0;
}