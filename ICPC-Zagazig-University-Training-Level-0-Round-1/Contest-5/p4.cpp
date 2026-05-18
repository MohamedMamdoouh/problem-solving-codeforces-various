// Group work

#include <iostream>
#include <cmath>
 
using namespace std;
 
long long countDistinctGroups(int N)
{
    long long totalGroups = pow(2, N);
    return totalGroups - N - 1;
}
 
int main()
{
    int N;
    cin >> N;
    cout << countDistinctGroups(N) << endl;
    return 0;
}
