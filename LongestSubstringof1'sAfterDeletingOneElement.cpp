#include <bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int> &nums)
{
    int i = 0, result = 0;
    int n = nums.size();
    int zeros = 0;
    for (int j = 0; j < n; ++j)
    {
        zeros += nums[j] == 0;
        while (zeros > 1)
        {
            if (nums[i] == 0)
                zeros--;
            i++;
        }
        result = max(result, j - i);
    }
    if (result == n)
        return result - 1;
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
    cout << longestSubarray(nums);
    return 0;
}