#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    int totalsum = 0;
    for (auto i : nums)
        totalsum += i;

    int leftsum = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        int rightsum = totalsum - nums[i] - leftsum;
        if (leftsum == rightsum)
            return i;
        leftsum += nums[i];
    }
    return -1;
}
/*
int pivotIndex(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int lsum = 0;
        int rsum = 0;
        // rightsum
        for (int j = i + 1; j < nums.size(); j++)
        {
            rsum += nums[j];
        }
        // leftsum
        for (int k = i - 1; k >= 0; k--)
        {
            lsum += nums[k];
        }
        if (lsum == rsum)
            return i;
    }
    return -1;
}
*/
int main()
{
    int n, temp;
    cin >> n;
    vector<int> nums;
    while (n--)
    {
        cin >> temp;
        nums.push_back(temp);
    }
    cout << pivotIndex(nums) << endl;
    return 0;
}