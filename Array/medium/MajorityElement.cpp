#include <bits/stdc++.h>
using namespace std;

// int majorityElement(vector<int> &nums)
// {
//     map<int, int> count;
//     for (int num : nums)
//     {
//         count[num]++;
//     }
//     int maxCount = 0;
//     int majorityElement = -1;
//     for (const auto &pair : count)
//     {
//         if (pair.second > maxCount)
//         {
//             majorityElement = pair.first;
//             maxCount = pair.second;
//         }
//     }
//     if (maxCount > nums.size() / 2)
//     {
//         return majorityElement;
//     }
//     return -1;
// }

int majorityElement(vector<int> &nums)
{
    int count = 0;
    int num = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
            num = nums[i];
        if (nums[i] == num)
            count++;
        else
            count--;
    }
    return num;
}