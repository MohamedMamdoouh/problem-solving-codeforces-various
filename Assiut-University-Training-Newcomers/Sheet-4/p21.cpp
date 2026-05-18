// New Words

#include <bits/stdc++.h>
using namespace std;
 
void newWords(string text)
{
    int arr[5] = {0};
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'e' || text[i] == 'E')
            arr[0]++;
        else if (text[i] == 'g' || text[i] == 'G')
            arr[1]++;
        else if (text[i] == 'y' || text[i] == 'Y')
            arr[2]++;
        else if (text[i] == 'p' || text[i] == 'P')
            arr[3]++;
        else if (text[i] == 't' || text[i] == 'T')
            arr[4]++;
    }
 
    int size = sizeof(arr) / sizeof(arr[0]);
    int *minElement = min_element(arr, arr + size);
    cout << *minElement << endl;
}
 
int main()
{
 
    string text;
    cin >> text;
    newWords(text);
    return 0;
}