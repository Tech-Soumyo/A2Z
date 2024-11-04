#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr)
{
    int l = arr.size();
    sort(arr.begin(), arr.end());

    return arr.back();
}
int seclast(vector<int> &arr)
{
    int l = arr.size();
    sort(arr.begin(), arr.end());

    return *(arr.rbegin() + 1);
}