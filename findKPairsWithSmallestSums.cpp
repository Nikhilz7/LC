#include <bits/stdc++.h>
using namespace std;
struct Compare
{
    bool operator()(const vector<int> &a, const vector<int> &b) const
    {
        return a[0] + a[1] > b[0] + b[1];
    }
};
vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
{
    priority_queue<vector<int>, vector<vector<int>>, Compare> que;
    vector<vector<int>> res;
    if (nums1.empty() || nums2.empty() || k == 0)
        return res;

    for (int i = 0; i < nums1.size() && i < k; i++)
    {
        que.push({nums1[i], nums2[0], 0});
    }

    while (k-- > 0 && !que.empty())
    {
        vector<int> cur = que.top();
        que.pop();
        res.push_back({cur[0], cur[1]});
        if (cur[2] == nums2.size() - 1)
            continue;
        que.push({cur[0], nums2[cur[2] + 1], cur[2] + 1});
    }

    return res;
}
vector<int> takeone(int n)
{
    vector<int> nums;
    int temp;
    while (n--)
    {
        cin >> temp;
        nums.push_back(temp);
    }
    return nums;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int k;
    cin >> k;
    vector<int> nums1 = takeone(n);
    vector<int> nums2 = takeone(m);
    vector<vector<int>> result = kSmallestPairs(nums1, nums2, k);
    for (int i = 0; i < result.size(); i++)

    {
        for (int j = 0; j < 2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}