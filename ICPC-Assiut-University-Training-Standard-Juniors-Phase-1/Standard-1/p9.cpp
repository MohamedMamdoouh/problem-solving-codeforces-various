//  Using vector

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    string Command;
 
    int q, n;
    cin >> n >> q;
 
    vector<long long> arr(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    while (q--)
    {
        cin >> Command;
 
        if (Command == "pop_back")
        {
            arr.pop_back();
        }
 
        else if (Command == "front")
        {
            cout << arr.front() << endl;
        }
 
        else if (Command == "back")
        {
            cout << arr.back() << endl;
        }
 
        else if (Command == "sort")
        {
            int L, R;
            cin >> L >> R;
            sort(arr.begin() + L - 1, arr.begin() + R);
        }
 
        else if (Command == "reverse")
        {
            int L, R;
            cin >> L >> R;
            reverse(arr.begin() + L - 1, arr.begin() + R);
        }
 
        else if (Command == "print")
        {
            int index;
            cin >> index;
            cout << arr[index-1] << endl;
        }
 
        else if (Command == "push_back")
        {
            long long num;
            cin >> num;
            arr.push_back(num);
        }
    }
 
    return 0;
}