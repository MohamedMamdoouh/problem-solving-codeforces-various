//) Two intervals

#include <iostream>
using namespace std;
 
int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
 
    // Find the boundaries of the intersection
    int intersectionLeft = max(l1, l2);
    int intersectionRight = min(r1, r2);
 
    // Check if there is an intersection
    if (intersectionLeft <= intersectionRight) {
        cout << intersectionLeft << " " << intersectionRight << endl;
    } else {
        cout << -1 << endl;
    }
 
    return 0;
}