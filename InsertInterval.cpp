#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
{
    vector<vector<int>> res;
    int firstNew = newInterval[0];
    int lastNew = newInterval[1];
    int n = intervals.size();
    for (int i = 0; i < n; i++)
    {
        // new intervals are before the current intervals
        if (intervals[i][0] > lastNew)
        {
            res.push_back(newInterval);
            copy(intervals.begin() + i, intervals.end(), back_inserter(res));
            return res;
        }
        // new intervals are after current interval
        else if (intervals[i][1] < firstNew)
        {
            res.push_back(intervals[i]);
        }
        // intervals overlaps
        else
        {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
        }
    }
    res.push_back(newInterval);
    return res;
}
int main()
{
    vector<vector<int>> intervals;
    vector<int> newInterval;
    int i, j, n;
    cin >> n;
    vector<int> temp;
    while (n--)
    {
        cin >> i >> j;
        temp = {i, j};
        intervals.push_back(temp);
        temp.clear();
    }
    cin >> i >> j;
    newInterval = {i, j};

    vector<vector<int>> res = insert(intervals, newInterval);
    cout << '[';
    for (auto i : res)
    {
        cout << '[';
        for (auto x : i)
        {
            cout << x << " ";
        }
        cout << ']';
    }
    cout << ']';
}