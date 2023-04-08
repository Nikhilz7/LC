#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mpp;
    vector<int> res;
    for (auto i = 0; i < nums.size(); i++)
    {
        int diff = target - nums[i];
        auto it = mpp.find(diff);
        if (it != mpp.end())
            return res = {it->second, i};
        mpp[nums[i]] = i;
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
    int target;
    cin >> target;

    vector<int> arr = twoSum(nums, target);
    for (auto i : arr)
        cout << i << " ";
    return 0;
}
