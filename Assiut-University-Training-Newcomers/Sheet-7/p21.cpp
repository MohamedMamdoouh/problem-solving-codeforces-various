// Knapsack

#include <bits/stdc++.h>
using namespace std;
 
// ChatGPT solution
 
// Recursive function to solve the knapsack problem
int knapsack(int W, int wt[], int val[], int n)
{
    // Base Case: If no items left or capacity is 0
    if (n == 0 || W == 0)
        return 0;
 
    // If the weight of the nth item is more than the capacity W, it cannot be included
    if (wt[n-1] > W)
        return knapsack(W, wt, val, n-1);
 
    // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included
    else
        return max(val[n-1] + knapsack(W - wt[n-1], wt, val, n-1),
                   knapsack(W, wt, val, n-1));
}
 
int main()
{
    int N, W;
    cin >> N >> W;
    int wt[N], val[N];
 
    for (int i = 0; i < N; i++)
    {
        cin >> wt[i] >> val[i];
    }
 
    cout << knapsack(W, wt, val, N) << endl;
 
    return 0;
}