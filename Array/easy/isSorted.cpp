#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    if (nums.size() == 1)
        return true;

    int lastElement = nums.back();
    int firstElement = nums.front();
    if (firstElement <= lastElement)
    {
        vector<int> arr;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            arr.push_back(nums[i]);
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] != nums[i])
                return false;
        }
        return false;
    }

    return true;
}