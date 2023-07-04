#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> res;
    int n = nums.size();
    if (n < 3)
    {
        return res;
    }
    sort(nums.begin(), nums.end());
    // sorting the array to avoid duplicate triplets
    for (int i = 0; i < n - 2; i++)
    {
        if (nums[i] > 0)
        {
            break;
        }

        if (i > 0 && nums[i - 1] == nums[i])
        {
            continue;
        }

        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                res.push_back({nums[i], nums[j], nums[k]});

                while (j < k && nums[j] == nums[j + 1])
                {
                    j++;
                }
                j++;

                while (j < k && nums[k - 1] == nums[k])
                {
                    k--;
                }
                k--;
            }
        }
    }
    return res;
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
    vector<vector<int>> resvec = threeSum(nums);
    for (int i = 0; i < resvec.size(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << resvec[i][j] << " ";
        }
    }
    return 0;
}