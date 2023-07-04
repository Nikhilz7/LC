#include <bits/stdc++.h>
using namespace std;
// get TOP 'k' frequent elements
vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        pq.push({it->second, it->first});
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    vector<int> result;
    while (!pq.empty())
    {
        result.push_back(pq.top().second);
        pq.pop();
    }
    return result;
}
int main()
{
    vector<int> nums;
    int temp;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        nums.push_back(temp);
    }
    int k;
    cin >> k;

    vector<int> arr = topKFrequent(nums, k);
    for (auto i : arr)
        cout << i << " ";
    return 0;
}

/* #include <bits/stdc++.h>
using namespace std;
vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> res;
    unordered_set<int> fset;
    for (int i : nums)
    {
        fset.insert(i);
        if (fset.size() == k)
            break;
    }
    for (int j : fset)
        res.push_back(j);
    return res;
}
int main()
{
    vector<int> nums;
    int temp;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        nums.push_back(temp);
    }
    int k;
    cin >> k;

    vector<int> arr = topKFrequent(nums, k);
    for (auto i : arr)
        cout << i << " ";
    return 0;
}
 */