#include <bits/stdc++.h>
using namespace std;
// ARRAY IS SORTED
//  vector<int> twoSum1(vector<int> &nums, int target)
//  {
//      unordered_map<int, int> mpp;
//      vector<int> res;
//      for (auto i = 0; i < nums.size(); i++)
//      {
//          int diff = target - nums[i];
//          auto it = mpp.find(diff);
//          if (it != mpp.end())
//              return res = {it->second, i};
//          mpp[nums[i]] = i;
//      }
//      return res;
//  }
vector<int> twoSum(vector<int> &numbers, int target)
{
    int s = 0, e = numbers.size() - 1;
    // 2,7,8,11,15
    while (s < e)
    {
        int sum = numbers[s] + numbers[e];
        if (sum < target)
            s++;
        else if (sum > target)
            e--;
        else
            return {s + 1, e + 1};
    }
    return {};
}
// vector<int> twoSum2(vector<int> &numbers, int target)
// {
//     unordered_map<int, int> mpp;
//     for (auto i = 0; i < numbers.size(); i++)
//     {
//         int diff = target - numbers[i];
//         auto val = mpp.find(diff);
//         if (val != mpp.end())
//         {
//             int j = val->second;
//             return {j + 1, i + 1};
//         }
//         mpp[numbers[i]] = i;
//     }
//     return {};
// }
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

    vector<int> arr = twoSum(nums, target);
    for (auto i : arr)
        cout << i << " ";
    return 0;
}
