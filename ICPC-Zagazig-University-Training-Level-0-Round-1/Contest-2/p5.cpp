//  Special Triangle

#include <iostream>
using namespace std;
 
int main()
{
    int numRows;
    cin >> numRows;
 
    // Loop to iterate over each row
    for (int i = 0; i < numRows; i++)
    {
        // Loop to print spaces before each row
        for (int j = 0; j < numRows - i - 1; j++)
        {
            cout << " ";
        }
 
        // Loop to print letters for each row
        char letter = 'A';
        for (int j = 0; j <= 2 * i; j++)
        {
            cout << letter;
            letter++;
 
            if (letter > 'Z')
                letter = 'A';
        }
 
        cout << endl;
    }
 
    return 0;
}