#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target)
{
    // if (nums.size() == 1)
    // {
    //     if (nums[0] == target)
    //         return 0;
    //     else
    //         return -1;
    // }
    int s = 0, l = nums.size() - 1;
    while (s <= l)
    {
        int m = (s + l) / 2;
        if (nums[m] == target)
            return m;
        if (nums[m] < target)
            s = m + 1;
        else
            l = m - 1;
    }
    return -1;
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
    cout << search(nums, target);
    return 0;
}
