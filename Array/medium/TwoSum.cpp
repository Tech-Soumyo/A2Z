#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> nummap;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (nummap.find(complement) != nummap.end())
        {
            return {nummap[complement], i};
        }

        nummap[nums[i]] = i;
    }
    return {-1, -1};
}