//  String Score

#include <bits/stdc++.h>
using namespace std;
// VYWZW
int stringScore(int number, string text)
{
    int score = 0;
    for (int i = 0; i < text.length(); i++)
    {
        switch (text[i])
        {
        case 'V':
            score += 5;
            break;
 
        case 'W':
            score += 2;
            break;
 
        case 'X':
            if (text.length() > i + 1)
            {
                //text.erase(i + 1, 1);
                //number--;
                i++;
            }
            break;
 
        case 'Y':
            if (text.length() > i + 1)
            {
                text.push_back(text[i + 1]);
                i++;
                // text.erase(i + 1, 1);
            }
            break;
 
        case 'Z':
            if (text.length() > i + 1)
            {
                if (text[i + 1] == 'V')
                {
                    score /= 5;
                    //text.erase(i + 1, 1);
                    //number--;
                    i++;
                }
 
                else if (text[i + 1] == 'W')
                {
                    score /= 2;
                    // text.erase(i + 1, 1);
                    // number--;
                    i++;
                }
            }
            break;
 
        default:
            break;
        }
    }
 
    return score;
}
 
int main()
{
 
    int number;
    string myStr;
    cin >> number >> myStr;
 
    cout << stringScore(number, myStr);
}