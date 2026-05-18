// Soltaaahaaaaan Problem

#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int number)
{
    if (number <= 1)
        return 0;
 
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return 0;
    }
 
    return 1;
}
 
int main()
{
    // Regarding performance optimization
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, k;
    cin >> n >> k;
 
    int primeArrIndex = 2, expressionArrIndex = 1, primeArr[n] = {0}, expressionArr[n] = {0}, counter = 0;;
    primeArr[1] = 2;
 
    for (int i = 3; i <= n; i++)
    {
        if (isPrime(i))
        {
            primeArr[primeArrIndex] = i;
            expressionArr[expressionArrIndex++] = primeArr[primeArrIndex] + primeArr[primeArrIndex - 1] + 1;
            primeArrIndex++;
        }
    }
 
    for (int i = 2; i <= n; ++i)
    {
        if (isPrime(i) && find(expressionArr + 1, expressionArr + expressionArrIndex + 1, i) != expressionArr + expressionArrIndex + 1)
        {
            counter++;
        }
    }
 
    if (counter >= k)
        cout << "YES\n";
 
    else
        cout << "NO\n";
 
    return 0;
}