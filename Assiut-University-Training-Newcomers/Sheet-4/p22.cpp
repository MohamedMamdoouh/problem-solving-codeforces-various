// Replace Word

#include <iostream>
#include <math.h>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <cctype>
using namespace std;
 
void replaceWord(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'E' && word[i + 1] == 'G' && word[i + 2] == 'Y' && word[i + 3] == 'P' && word[i + 4] == 'T')
        {
            cout << " ";
            i += 4;
            // word[i + 1] = '\0';
            // word[i + 2] = '\0';
            // word[i + 3] = '\0';
            // word[i + 4] = ' ';
        }
        else
            cout << word[i];
    }
}
 
 
int main()
{
    string word;
    getline(cin, word);
    replaceWord(word);
 
    return 0;
}
