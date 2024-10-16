#include <bits/stdc++.h>
using namespace std;
int chelper(int n, unordered_map<int, int> &mpp)
{
    if (n == 0 || n == 1)
        return 1;
    if (mpp.find(n) == mpp.end())
        mpp[n] = chelper(n - 1, mpp) + chelper(n - 2, mpp);
    return mpp[n];
}
int climbStairs(int n)
{
    unordered_map<int, int> mpp;
    int res = chelper(n, mpp);
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << climbStairs(n);
    return 0;
}