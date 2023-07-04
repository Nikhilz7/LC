#include <bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int> &nums)
{
    vector<int> res = {nums[0]}; // initialize first element of nums
    for (int i = 1; i < nums.size(); i++)
        res.push_back(res[i - 1] + nums[i]); // back returns lastelement of array
    return res;
}
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
    vector<int> res = runningSum(nums);
    for (auto i : res)
        cout << i << " ";
    return 0;
}