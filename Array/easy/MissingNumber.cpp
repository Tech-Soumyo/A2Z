#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);

        sort(nums.begin(), nums.end());
        if (nums[0] != 0)
            return 0;
        if (nums.size() == 1 && nums[0] == 0)
            return 1;
        if (nums.size() == 2 && nums[1] == 1)
        {
            return 2;
        }
        int miss = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            miss++;
            if (nums[i + 1] != miss)
            {
                return miss;
            }
        }
        return nums.size();
    }
};