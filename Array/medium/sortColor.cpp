#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int s = 0, ele = 0, e = nums.size() - 1;

    while (ele <= e)
    {
        if (nums[ele] == 0)
        {
            swap(nums[ele], nums[s]);
            s++, ele++;
        }
        else if (nums[ele] == 1)
            ele++;
        else if (nums[ele] == 2)
        {
            swap(nums[e], nums[ele]);
            ele++, e--;
        }
    }
}