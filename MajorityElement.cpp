#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    // TLE

    // int n = nums.size();
    // if(n==1)return nums[0];
    // int major = n/2;
    // int ans;
    // for(int i = 0;i<n-1;i++){
    //     int count=1;
    //     for(int j=1;j<n;j++){
    //         if(nums[i]==nums[j])
    //             count++;
    //     }
    //     if(count>major){
    //         return nums[i];
    //     }

    // }
    // return ans;

    int count = 0;
    int major = 0;
    for (int n : nums)
    {
        if (count == 0)
            major = n;
        if (n == major)
            count++;
        else
            count--;
    }
    return major;
}
int main()
{
    vector<int> nums;
    int temp, n;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        nums.push_back(temp);
    }
    cout << majorityElement(nums) << endl;
    return 0;
}