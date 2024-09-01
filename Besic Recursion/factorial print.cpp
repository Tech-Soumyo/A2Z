#include <bits/stdc++.h>
using namespace std;

// vector<long long> factorialNumbers(long long n)
// {
//     // Write Your Code here
//     if (n == 0)
//         return {1};
//     vector<long long> ans;
//     long long sum = n;
//     factorialNumbers(n - 1);
//     ans.push_back(sum);
//     return ans;
// }

long long fact(long long n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
vector<long long> factorialNumbers(long long n)
{
    // Write Your Code here
    vector<long long> ans;

    long long i = 1;
    while (i <= n)
    {
        long long val = fact(i);
        if (val > n)
            break;

        ans.emplace_back(val);
        i++;
    }

    return ans;
}