#include <bits/stdc++.h>
using namespace std;
/* You must implement a solution with a linear runtime complexity and use only constant extra space. */
int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> countnum;
    for (int i = 0; i < nums.size(); i++)
    {
        countnum[nums[i]]++;
    }
    for (int j = 0; j < nums.size(); j++)
    {
        if (countnum[nums[j]] == 1)
            return nums[j];
    }
    return -1;
}
vector<int> takeone(int n)
{
    int temp;
    vector<int> nums;
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
    vector<int> nums = takeone(n);
    cout << singleNumber(nums);
    return 0;
}
