#include <bits/stdc++.h>
using namespace std;
vector<int> topKFrequent(vector<int> &nums, int k)
{
    vector<int> res;
    unordered_map<int, int> mpp;
    for (int i : nums)
    {
        mpp[i]++;
        if (mpp[i] == k)
            res.push_back(i);
    }
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