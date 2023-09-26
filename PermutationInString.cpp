#include <bits/stdc++.h>
using namespace std;
/*  Time: O(n)
    Space: O(1) */
bool isPermutation(vector<int> &count);
bool checkInclusion(string s1, string s2)
{
    int m = s1.size();
    int n = s2.size();
    if (m > n)
        return false;

    vector<int> count(26);
    for (int i = 0; i < m; i++)
    {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }
    if (isPermutation(count))
        return true;

    for (int i = m; i < n; i++)
    {
        count[s2[i] - 'a']--;
        count[s2[i - m] - 'a']++;
        if (isPermutation(count))
            return true;
    }

    return false;
}
bool isPermutation(vector<int> &count)
{
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            return false;
    }
    return true;
}
int main()
{
    string s, t;
    cin >> s >> t;
    if (checkInclusion(s, t))
        cout << "true";
    else
        cout << "false";
    return 0;
}