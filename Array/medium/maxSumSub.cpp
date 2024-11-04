#include <bits/stdc++.h>
using namespace std;

int pairWithMaxSum(vector<int> &arr)
{
    int mx = INT_MIN;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        mx = max(mx, arr[i] + arr[i + 1]);
    }
    return mx;
}
