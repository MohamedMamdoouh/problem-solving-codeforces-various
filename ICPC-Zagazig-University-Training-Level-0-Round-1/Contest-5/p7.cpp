//  Facebook down

#include <iostream>
using namespace std;
 
bool isFound(string text1, string text2)
{
    for (int i = 0; i < text1.length(); i++)
    {
        return text1[0] == text2[0];
    }
}
 
int main()
{
   string s1, s2, s3;
   cin >> s1 >> s2 >> s3;
 
   if('F' != s1[0] && 'F' != s2[0] && 'F' != s3[0])
   cout << "Facebook\n";
 
   else if ('I' != s1[0] && 'I' != s2[0] && 'I' != s3[0])
   cout << "Instagram\n";
 
   else if ('W' != s1[0] && 'W' != s2[0] && 'W' != s3[0])
   cout << "WhatsApp\n";
 
   else
   cout << "Messenger\n";
 
    return 0;
}