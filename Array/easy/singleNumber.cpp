#include <bits/stdc++.h>
using namespace std;

// You can solve this problem in a single pass using XOR. XOR of two identical numbers is 0, and XOR of a number with 0 is the number itself. Thus, XORing all the elements will cancel out the elements that appear twice, leaving the single number.
int singleNumber(vector<int> &nums)
{
    ios_base::sync_with_stdio(false);
    int result = 0;
    for (int num : nums)
    {
        result ^= num; // XOR operation
    }
    return result;
}