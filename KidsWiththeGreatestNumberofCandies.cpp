#include <bits/stdc++.h>
using namespace std;
vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    vector<bool> res(candies.size(), false);
    int maxc = 0;
    for (auto i : candies)
        maxc = max(maxc, i);
    for (int i = 0; i < candies.size(); i++)
    {
        int sum = candies[i] + extraCandies;
        bool flag = false;
        if (sum >= maxc)
            flag = true;
        res[i] = flag;
    }
    return res;
}
int main()
{
    int n, c, temp;
    cin >> n;
    cin >> c;
    vector<int> candies;
    while (n--)
    {
        cin >> temp;
        candies.push_back(temp);
    }
    vector<bool> res = kidsWithCandies(candies, c);
    for (auto i : res)
    {
        if (i != 0)
            cout << "true"
                 << " ";
        else
            cout << "false"
                 << " ";
    }
    return 0;
}