#include <bits/stdc++.h>
using namespace std;
vector<int> takeone(int n)
{
    vector<int> nums;
    int temp;
    while (n--)
    {
        cin >> temp;
        nums.push_back(temp);
    }
    return nums;
}
int longestConsecutive(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    set<int> mpp(nums.begin(), nums.end());
    int count = 0;
    for (int x : mpp)
    {
        if (mpp.find(x - 1) == mpp.end()) // didn't find previous element => x = start
        {
            int next = x + 1;
            while (mpp.find(next) != mpp.end())
                next++;
            count = max(count, next - x); // max of count || next (last+1)-first
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums = takeone(n);
    cout << longestConsecutive(nums);
    return 0;
}