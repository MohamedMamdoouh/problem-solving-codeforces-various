// Team Olympiad

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    int freq[4] = {0}, arr[n + 1] = {0}, arrOfOne[n + 1] = {0}, arrOfTwo[n + 1] = {0}, arrOfThree[n + 1] = {0};
    int index1 = 0, index2 = 0, index3 = 0;
 
    // neglect index 0 in all arrays
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
 
        if (arr[i] == 1)
            arrOfOne[index1++] = i;
 
        else if (arr[i] == 2)
            arrOfTwo[index2++] = i;
 
        else
            arrOfThree[index3++] = i;
    }
 
    int *minNum = min_element(freq + 1, freq + 4);
    cout << *minNum << endl;
 
    for (int i = 0; i < *minNum; i++)
    {
        cout << arrOfOne[i] << " " << arrOfTwo[i] << " " << arrOfThree[i] << endl;
    }
 
    return 0;
}
 