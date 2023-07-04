#include <bits/stdc++.h>
using namespace std;
bool buddyStrings(string s, string goal)
{

    if (s.size() != goal.size() || s.size() < 2)
        return false;
    if (s == goal)
    {
        set<char> s_set; // to check only duplicates exists
        for (char c : s)
            s_set.insert(c);
        if (s_set.size() < s.size())
            return true;
        return false;
    }
    vector<int> diff;
    for (int c = 0; c < s.size(); c++)
    {
        if (s[c] != goal[c])
            diff.push_back(c);
    }
    //  && s[diff[0]] == goal[diff[1]] && s[diff[1]] == s[diff[0]]
    if (diff.size() == 2)
    {
        string temp = s;
        swap(temp[diff[0]], temp[diff[1]]);
        if (temp == goal)
            return true;
    }
    return false;
}

int main()
{
    string s, goal;
    cin >> s >> goal;
    if (buddyStrings(s, goal))
        cout << "true";
    else
        cout << "false";
    return 0;
}