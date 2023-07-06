#include <bits/stdc++.h>
using namespace std;
// O(n log n)
int minSubArrayLen(int k, vector<int> &nums)
{
    int n = nums.size(), len = INT_MAX;
    vector<int> sums(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        sums[i] = sums[i - 1] + nums[i - 1];
    }
    for (int i = n; i >= 0 && sums[i] >= k; i--)
    {
        int j = upper_bound(sums.begin(), sums.end(), sums[i] - k) - sums.begin();
        len = min(len, i - j + 1);
    }
    return len == INT_MAX ? 0 : len;
}
// O(n)
int minSubArrayLen_brute(int target, vector<int> &nums)
{
    int minLen = INT_MAX, n = nums.size(), i = 0, j = 0, sum = 0;
    while (i < n)
    {
        sum += nums[i++];
        while (sum >= target)
        {
            minLen = min(minLen, i - j);
            sum -= nums[j++];
        }
    }
    return minLen == INT_MAX ? 0 : minLen;
}
int main()
{
    vector<int> nums;
    int k;
    cin >> k;
    int temp;
    while (cin >> temp)
    {
        nums.push_back(temp);
    }
    cout << minSubArrayLen_brute(k, nums);
    // cout << minSubArrayLen(k, nums);
    return 0;
}