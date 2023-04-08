#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    m = 3;
    int c = 0;
    for (int i = m; i < nums1.size(); i++)
    {
        nums1[i] = nums2[c];
        c++;
    }
    sort(nums1.begin(), nums1.end());
    for (auto i : nums1)
        cout << i << " ";
}
int main()
{
    vector<int> nums1;
    vector<int> nums2;
    int temp;
    int m, n;
    cin >> m >> n;
    while (m--)
    {
        cin >> temp;
        nums1.push_back(temp);
    }
    // cout << nums1.size() << endl;
    while (n--)
    {
        cin >> temp;
        nums2.push_back(temp);
    }
    merge(nums1, m, nums2, n);
    return 0;
}