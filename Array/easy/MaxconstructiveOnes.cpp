#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    ios_base::sync_with_stdio(false);
    int maxOnes = 0;
    int currentOnes = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i])
        {
            currentOnes++;
            if (maxOnes < currentOnes)
            {
                maxOnes = currentOnes;
            }
        }
        else
            currentOnes = 0;
    }
}