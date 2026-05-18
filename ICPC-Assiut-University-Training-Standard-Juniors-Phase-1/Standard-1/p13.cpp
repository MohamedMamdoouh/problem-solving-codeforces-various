// distinct elements

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, q, x;
    cin >> n >> q;
 
    int arr[n];
    int freqArr[100001] = {0};  // Frequency array to track distinct elements
    int distinctPrefix[100001] = {0};  // Prefix sum array for distinct elements
 
    // Step 1: Fill the frequency array based on input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freqArr[arr[i]]++;
    }
 
    // Step 2: Build the distinct prefix array (similar to prefix sum)
    for (int i = 1; i <= 100000; i++) {
        distinctPrefix[i] = distinctPrefix[i - 1];
        if (freqArr[i] > 0) {
            distinctPrefix[i]++;  // Increment only if the element is distinct
        }
    }
 
    // Step 3: Answer each query
    while (q--) {
        cin >> x;
 
        // Distinct elements less than x
        int lessCount = distinctPrefix[x - 1];
 
        // Distinct elements greater than x
        int greaterCount = distinctPrefix[100000] - distinctPrefix[x];
 
        cout << lessCount << " " << greaterCount << endl;
    }
 
    return 0;
}