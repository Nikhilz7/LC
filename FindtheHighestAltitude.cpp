#include <bits/stdc++.h>
using namespace std;
int largestAltitude(vector<int> &gain)
{
    int sum = 0;
    int high = sum;
    for (int i : gain)
    {
        sum += i;
        if (sum > high)
            high = sum;
    }
    return high;
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
    cout << "\n"
         << largestAltitude(nums);
    return 0;
}