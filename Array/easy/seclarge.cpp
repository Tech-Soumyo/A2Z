#include <bits/stdc++.h>
using namespace std;

int secLargest(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    auto it = unique(arr.begin(), arr.end());
    arr.erase(it, arr.end());

    if (*(arr.rbegin() + 1) == 0)
        return -1;

    return *(arr.rbegin() + 1);
}