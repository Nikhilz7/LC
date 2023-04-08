#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> prices;
    int temp;
    while (cin >> temp)
    {
        prices.push_back(temp);
    }
    // int buydate = 0, selldate = 0; // dates
    // bool brought = false;
    // int profit = 0;
    // int buyvalue = 0;
    // int sellvalue = 0;
    // for (int i = 0; i < prices.size(); i++)
    // {
    //     if (prices[i] <= buyvalue || buyvalue == 0)
    //     {
    //         buyvalue = prices[i];
    //         buydate = i; // 1
    //         brought = true;
    //     }
    //     if (prices[i] > sellvalue && brought == true)
    //     {
    //         sellvalue = prices[i];
    //         selldate = i;
    //     }
    // }
    // if (buydate < selldate)
    //     profit = sellvalue - buyvalue;
    int minv = INT_MAX;
    int profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        minv = min(minv, prices[i]);            // lowest price
        profit = max(profit, prices[i] - minv); // current maximum profit = current price-minimum price
    }
    cout << profit;
    return 0;
}