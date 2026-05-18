//  Kth Number

#include <iostream>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int count_missing = 0;
    int last_seen = 0;
    for (int i = 0; i < n; i++) {
        count_missing += arr[i] - last_seen - 1;
        if (count_missing >= k) {
            cout << last_seen + k - (count_missing - (arr[i] - last_seen - 1)) << endl;
            return 0;
        }
        last_seen = arr[i];
    }
 
    // If kth missing integer is after the last element of the array
    cout << arr[n - 1] + (k - count_missing) << endl;
 
    return 0;
}