#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.end() - k);
    reverse(nums.end() - k, nums.end());
    reverse(nums.begin(), nums.end());
}
