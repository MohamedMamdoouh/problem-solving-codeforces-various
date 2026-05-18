// Soltan's Triangle

#include <iostream>
#include <algorithm>
 
using namespace std;
 
int min_minutes_to_form_triangle(int a, int b, int c) {
    // Sort the sticks in non-decreasing order
    int sticks[] = {a, b, c};
    sort(sticks, sticks + 3);
    
    // Check if the triangle inequality holds
    if (sticks[0] + sticks[1] > sticks[2]) {
        return 0;  // Triangle can be formed with the given sticks
    }
    
    // Calculate the minimum number of minutes needed
    // to increase the length of one stick to satisfy
    // the triangle inequality
    return sticks[2] - (sticks[0] + sticks[1]) + 1;
}
 
int main() {
    int a, b, c;
    // Input
    cin >> a >> b >> c;
 
    // Output
    cout << min_minutes_to_form_triangle(a, b, c) << endl;
 
    return 0;
}