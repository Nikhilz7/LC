#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> mpp;
        for (auto i : nums)
            mpp.insert(i);
        nums.erase(nums.begin(), nums.end());
        for (auto i : mpp)
        {
            nums.push_back(i);
        }
        return nums.size();
    }
};

int main()
{
    Solution obj = Solution();
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << obj.removeDuplicates(nums) << endl;
    for (int x : nums)
    {
        cout << x << ",";
    }
    return 0;
}
