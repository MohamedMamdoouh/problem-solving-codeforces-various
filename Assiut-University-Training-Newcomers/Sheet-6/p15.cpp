// Big Add and Multiply

#include <iostream>
#include <string>
using namespace std;

string addBig(string n, int x)
{
    int carry = x;
    int i = n.size() - 1;

    while (i >= 0 || carry > 0)
    {
        if (i >= 0)
        {
            int sum = (n[i] - '0') + (carry % 10);
            carry /= 10;

            if (sum >= 10)
            {
                sum -= 10;
                carry++;
            }

            n[i] = sum + '0';
            i--;
        }
        else
        {
            n = char((carry % 10) + '0') + n;
            carry /= 10;
        }
    }

    return n;
}

string multiplyBig(string n, int x)
{
    string result = "";
    int carry = 0;

    for (int i = n.size() - 1; i >= 0; i--)
    {
        int product = (n[i] - '0') * x + carry;

        result = char((product % 10) + '0') + result;
        carry = product / 10;
    }

    while (carry > 0)
    {
        result = char((carry % 10) + '0') + result;
        carry /= 10;
    }

    return result;
}

int main()
{
    string N;
    cin >> N;

    cout << addBig(N, 9999) << '\n';
    cout << multiplyBig(N, 9999) << '\n';

    return 0;
}