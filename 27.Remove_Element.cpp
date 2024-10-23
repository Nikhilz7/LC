#include <bits/stdc++.h>
using namespace std;
/* Error in bf merge
Line 11: Char 28:
=================================================================
==22==ERROR: AddressSanitizer: heap-buffer-overflow on address 0x502000000434 at pc 0x55c073e44b74 bp 0x7ffcd1aecb50 sp 0x7ffcd1aecb48
*/
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int lenofval = 0;
        int l = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            (nums[i] == val) ? nums[i] = l : lenofval++;
        }
        sort(nums.begin(), nums.end());
        return lenofval;
    }
};

int main()
{
    Solution obj = Solution();
    // vector<int> nums = {3, 2, 2, 3};
    // int val = 3;
    // vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    // int val = 2;
    vector<int> nums = {2, 2};
    int val = 2;

    cout << obj.removeElement(nums, val) << endl;
    for (int x : nums)
    {
        cout << x << ",";
    }
    return 0;
}
