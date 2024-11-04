#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    ios_base::sync_with_stdio(false);
    int max_sum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];
        max_sum = max(sum, max_sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max_sum;
}