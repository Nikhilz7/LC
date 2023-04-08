#include <bits/stdc++.h>
using namespace std;
void productExceptSelf(vector<int> &nums)
{

    return;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};

    int n = nums.size();
    int leftproduct = 1;
    int rightproduct = 1;
    vector<int> answer(n, 1);
    for (int i = 0; i < n; i++)
    {
        answer[i] *= leftproduct;
        leftproduct *= nums[i];
        answer[n - 1 - i] *= rightproduct;
        rightproduct *= nums[n - 1 - i];
    }
    for (auto itr : answer)
        cout << itr << " ";
    // int temp;
    // while (cin >> temp)
    // {
    //     nums.push_back(temp);
    // }
    // productExceptSelf(nums);
    // vector<int> answer = productExceptSelf(nums);
    // for (auto itr : answer)
    //     cout << itr << " ";

    return 0;
}