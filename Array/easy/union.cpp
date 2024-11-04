#include <iostream>
#include <set>
#include <algorithm>

void findUnion(int arr1[], int n, int arr2[], int m)
{
    // Use a set to handle duplicates and store the union
    std::set<int> unionSet;

    // Insert elements from arr1
    for (int i = 0; i < n; i++)
    {
        unionSet.insert(arr1[i]);
    }

    // Insert elements from arr2
    for (int i = 0; i < m; i++)
    {
        unionSet.insert(arr2[i]);
    }

    // Print the union of the arrays (automatically sorted due to set)
    std::cout << "Union of arrays: ";
    for (int num : unionSet)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    findUnion(arr1, n, arr2, m);

    return 0;
}
