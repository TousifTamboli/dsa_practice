// // The function def differenceofSum(n. m) accepts two integers n, m as arguments 
// Find the sum of all numbers in range from 1 to m(both inclusive) that are not divisible by n. 
// Return difference between sum of integers not divisible by n with sum of numbers divisible by n.

#include <iostream>
using namespace std;

int differenceofSum(int n, int m)
{
    int sumOfN = 0;
    int sumOfM = 0;

    for (int i = 1; i <= m; i++)
    {
        if (i % n == 0)
        {
            sumOfN += i;
        }
        else
            sumOfM += i;
    }

    int diff = sumOfM - sumOfN;

    return diff;
}

int main()
{
    int n = 3;
    int m = 10;

    int result;

    // cin >> n >> m;

    result = differenceofSum(n, m);

    cout << result;
    return 0;
}