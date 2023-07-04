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
int search(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return mid;
        // First half
        if (nums[start] <= nums[mid])
        {
            if (nums[start] <= target && target <= nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        // Second half
        else
        {
            if (nums[mid] <= target && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums = takeone(n);
    int k;
    cin >> k;
    cout << search(nums, k);
}