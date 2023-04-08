#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN;
    int runningSum = 0;
    for (int i : nums)
    {
        if (runningSum < 0)
            runningSum = i;
        else
            runningSum += i;
        maxSum = max(maxSum, runningSum);
    }
    return maxSum;
}
int main()
{
    vector<int> nums;
    int temp;
    while (cin >> temp)
    {
        nums.push_back(temp);
    }
    cout << maxSubArray(nums);
    return 0;
}