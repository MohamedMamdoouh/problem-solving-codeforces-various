//  Sum of Range

#include <bits/stdc++.h>
using namespace std;
 
long long sumOdd(long long number)
{
    // return sum of odd numbers from 0 to number
    long long result = (number + 1) / 2;
    return result * result;
}
 
long long sumEven(long long number)
{
    // return sum of even numbers from 0 to number
    number /= 2;
    return (number * (number + 1));
}
 
int main()
{
    long long A, B, start, end;
    cin >> A >> B;
 
    start = min(A, B);
    end = max(A, B);
 
    long long sumOddResult = sumOdd(end) - sumOdd(start - 1);
    long long sumEvenResult = sumEven(end) - sumEven(start - 1);
    long long sumAll = sumOddResult + sumEvenResult;
 
    cout << sumAll << endl;
    cout << sumEvenResult << endl;
    cout << sumOddResult << endl;
 
    return 0;
}