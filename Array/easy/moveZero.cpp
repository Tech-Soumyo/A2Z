#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int count = 0;
    vector<int> arr;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            count++;
        else
        {
            arr.push_back(nums[i]);
        }
    }
    for (int i = 0; i < count; i++)
    {
        arr.push_back(0);
    }
    nums = arr;
}