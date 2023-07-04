#include <bits/stdc++.h>
using namespace std;
int lastStoneWeight(vector<int> &stones)
{
    int res = 0;
    stack<int> stonestk;
    sort(stones.begin(), stones.end());
    for (auto i : stones)
        stonestk.push(i);
    int high;
    while (!stonestk.empty())
    {
        high = stonestk.top();
        stonestk.pop();
        if (high == stonestk.top())
        {
            stonestk.pop();
        }
        else if (high)
            res = high - stonestk.top();
        stonestk.pop();
    }

    // for (auto i = 0; i < stones.size(); i++)
    // {
    //     if (stones[n] != stones[n - 1])
    //     {
    //         res = stones[n] - stones[n - 1];
    //     }
    //     newstone.push_back(stones[i]);
    // }
    return res;
}
int main()
{
    int temp;
    int n;
    vector<int> stones;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        stones.push_back(temp);
    }
    cout << lastStoneWeight(stones);
    return 0;
}