#include <vector>
using namespace std;

// vector<int> rearrangeArray(vector<int> &nums)
// {
//     vector<int> positive;
//     vector<int> negative;

//     // Separate positive and negative numbers
//     for (int num : nums)
//     {
//         if (num > 0)
//         {
//             positive.push_back(num);
//         }
//         else
//         {
//             negative.push_back(num);
//         }
//     }

//     vector<int> result(nums.size());
//     int posIndex = 0, negIndex = 0;

//     // Alternate between positive and negative
//     for (int i = 0; i < nums.size(); i += 2)
//     {
//         result[i] = positive[posIndex++];
//         result[i + 1] = negative[negIndex++];
//     }

//     return result;
// }

vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    int pi = 0; // positive index
    int ni = 1; // negative index

    vector<int> result(n);

    for (int &num : nums)
    {
        if (num > 0)
        {
            result[pi] = num;
            pi += 2;
        }
        else
        {
            result[ni] = num;
            ni += 2;
        }
    }

    return result;
}