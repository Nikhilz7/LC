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
int maxArea_brute(vector<int> &height)
{
    int cap = 0, area, n = height.size();
    for (int l = 0; l < n; l++)
    {
        for (int r = l + 1; r < n; r++)
        {
            area = (r - l) * min(height[l], height[r]);
            cap = max(cap, area);
        }
    }
    return cap;
}
int maxArea(vector<int> &height)
{
    int cap = 0, l = 0, r = height.size() - 1;
    while (l < r)
    {
        int len = min(height[l], height[r]);
        int wid = (r - l);
        int area = wid * len;
        cap = max(cap, area);
        (height[l] <= height[r]) ? l++ : r--;
    }
    return cap;
}
int main()
{
    int n;
    cin >> n;
    vector<int> height = takeone(n);
    // cout << maxArea_brute(height);
    cout << maxArea(height);
    return 0;
}
