#include <bits/stdc++.h>
using namespace std;

long long sumOfSeries(long long n)
{
    // code here
    if (n == 0)
    {
        return 0;
    }
    return (n * n * n) + sumOfSeries(n - 1);
}