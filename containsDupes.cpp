#include <bits/stdc++.h>
using namespace std;
// TIME: O(n^2)
// SPACE: O(1)
bool containsDuplicate(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
                return true;
        }
    }
    return false;
}
// TIME: O(n)
// SPACE: O(n)
bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> hset;
    for (auto it : nums)
    {
        if (hset.find(it) != hset.end())
            return true;
        hset.insert(it);
    }
    return false;
}
bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> s;
    for (auto it : nums)
    {
        s.insert(it);
    }
    if (s.size() == nums.size())
        return false;
    return true;
}
// TIME: O(nlogn)
// SPACE: O(1)
bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;
}
bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> hset;
    for (auto it : nums)
    {
        if (hset.find(it) != hset.end())
            return true;
        hset.insert(it);
    }
    return false;
}
int main()
{
    vector<int> nums;
    int temp;
    while (cin >> temp)
    {
        nums.push_back(temp);
    }
    cout << nums[nums.size()];
    // if (containsDuplicate(nums))
    //     cout << "true";
    // else
    //     cout << "false";
    return 0;
}