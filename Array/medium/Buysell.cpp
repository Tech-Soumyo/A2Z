#include <bits/stdc++.h>
using namespace std;

// time complexity -->> O(n2 log n)
/*
int maxProfit(vector<int> &prices)
{
    int mx = 0;
    int dt = 0;
    int maxEle = 0;
    vector<int> copiedPrices(prices.size());

    for (int i = 0; i < prices.size() - 1; i++)
    {
        dt = prices[i];
        copy(prices.begin(), prices.end(), copiedPrices.begin());
        sort(copiedPrices.begin() + i, copiedPrices.end());
        maxEle = copiedPrices.back();
        if (maxEle > dt)
        {
            int profit = maxEle - dt;
            mx = max(mx, profit);
        }
    }
    return mx;
}
*/
int maxProfit(vector<int> &prices)
{
    int minPrice = INT_MAX; // Track the minimum price seen so far
    int maxProfit = 0;      // Track the maximum profit

    for (int price : prices)
    {
        // Update minimum price if the current price is lower
        minPrice = min(minPrice, price);

        // Calculate the potential profit with the current price
        int profit = price - minPrice;

        // Update maximum profit if the calculated profit is higher
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}
