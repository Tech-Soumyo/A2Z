// #include <iostream>
// using namespace std;

// class Solution
// {
// public:
//     // Function to merge two sorted subarrays into a single sorted array
//     void merge(int arr[], int l, int m, int r)
//     {
//         int n1 = m - l + 1; // Size of the left subarray
//         int n2 = r - m;     // Size of the right subarray

//         // Create temporary arrays to hold the subarray values
//         int left[n1], right[n2];

//         // Copy data to the temporary arrays
//         for (int i = 0; i < n1; i++)
//         {
//             left[i] = arr[l + i];
//         }
//         for (int j = 0; j < n2; j++)
//         {
//             right[j] = arr[m + 1 + j];
//         }

//         // Merge the temporary arrays back into arr[l..r]
//         int i = 0; // Initial index of the left subarray
//         int j = 0; // Initial index of the right subarray
//         int k = l; // Initial index of the merged subarray

//         while (i < n1 && j < n2)
//         {
//             if (left[i] <= right[j])
//             {
//                 arr[k] = left[i];
//                 i++;
//             }
//             else
//             {
//                 arr[k] = right[j];
//                 j++;
//             }
//             k++;
//         }

//         // Copy the remaining elements of the left subarray, if any
//         while (i < n1)
//         {
//             arr[k] = left[i];
//             i++;
//             k++;
//         }

//         // Copy the remaining elements of the right subarray, if any
//         while (j < n2)
//         {
//             arr[k] = right[j];
//             j++;
//             k++;
//         }
//     }

//     // Function to sort the array using the Merge Sort algorithm
//     void mergeSort(int arr[], int l, int r)
//     {
//         if (l < r)
//         {
//             // Find the middle point of the array
//             int m = l + (r - l) / 2;

//             // Recursively sort the first and second halves
//             mergeSort(arr, l, m);
//             mergeSort(arr, m + 1, r);

//             // Merge the sorted halves
//             merge(arr, l, m, r);
//         }
//     }
// };

// // Example usage
// int main()
// {
//     Solution solution;
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     solution.mergeSort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int>& arr, int l, int m, int r)
    {
        vector<int> tempArr(r - l + 1);
        int i = l, j = m + 1, k = 0;

        while (i <= m && j <= r)
        {
            if (arr[i] <= arr[j])
            {
                tempArr[k++] = arr[i++];
            }
            else
            {
                tempArr[k++] = arr[j++];
            }
        }

        while (i <= m)
        {
            tempArr[k++] = arr[i++];
        }

        while (j <= r)
        {
            tempArr[k++] = arr[j++];
        }

        for (int p = 0; p < k; p++)
        {
            arr[l + p] = tempArr[p];
        }
    }

    void mergeSort(vector<int>& arr)
    {
        int n = arr.size();
        for (int currSize = 1; currSize <= n - 1; currSize *= 2)
        {
            for (int leftStart = 0; leftStart < n - 1; leftStart += 2 * currSize)
            {
                int mid = min(leftStart + currSize - 1, n - 1);
                int rightEnd = min(leftStart + 2 * currSize - 1, n - 1);
                merge(arr, leftStart, mid, rightEnd);
            }
        }
    }
};

int main()
{
    Solution solution;
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    solution.mergeSort(arr);

    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}