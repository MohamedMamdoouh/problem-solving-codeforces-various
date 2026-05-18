// Soltan's Challenge

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
int main()
{
    int numbers, index;
    cin >> numbers;
    int arr[numbers];
 
    for (int i = 0; i < numbers; i++)
    {
        cin >> arr[i];
    }
    int key = 0;
    for (int i = 0; i < numbers; i++)
    {
        key = i;
        if(arr[i+1] <= arr[i])
        {
            index = i;
            break;
        }
    }
 
    cout << key + 1 << endl;
    
 
    return 0;
}