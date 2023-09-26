#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &nums, int k)
{

    int n = nums.size();
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[(i + k) % n] = nums[i];
    }
    for (int x : arr)
        cout << x << " ";
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
    rotate(nums, target);
}