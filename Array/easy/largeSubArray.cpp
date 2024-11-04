#include <bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(int A[], int N, int K)
{
    // Map to store the first occurrence of each cumulative sum
    unordered_map<int, int> sum_map;

    int sum = 0;     // Initialize the cumulative sum
    int max_len = 0; // To store the length of the longest sub-array

    for (int i = 0; i < N; i++)
    {
        // Add current element to the cumulative sum
        sum += A[i];

        // Check if the cumulative sum is equal to K,
        // then the sub-array from the start to current index has the sum K
        if (sum == K)
        {
            max_len = i + 1;
        }

        // Check if (sum - K) exists in the map
        if (sum_map.find(sum - K) != sum_map.end())
        {
            // Update max_len if we find a longer sub-array
            max_len = max(max_len, i - sum_map[sum - K]);
        }

        // If this cumulative sum hasn't been seen before, store it
        if (sum_map.find(sum) == sum_map.end())
        {
            sum_map[sum] = i;
        }
    }

    return max_len;
}

int main()
{
    int A[] = {10, 5, 2, 7, 1, 9}; // Example array
    int N = sizeof(A) / sizeof(A[0]);
    int K = 15; // Given sum

    cout << "Length of the longest sub-array: " << lenOfLongSubarr(A, N, K) << endl;
    return 0;
}
