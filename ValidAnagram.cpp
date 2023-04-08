#include <bits/stdc++.h>
using namespace std;
// tc O(s+t)
// sc O(s+t)
// extra memory
bool isAnagram(string s, string t)
{
    if (s.length() - 1 != t.length() - 1)
        return false;
    unordered_map<char, int> countS, countT;
    for (int i = 0; i < s.length(); i++)
    {
        countS[s[i]] = 1 + countS[s[i]];
        countT[t[i]] = 1 + countT[t[i]];
    }
    for (auto c : countS)
    {
        if (countT[c.first] != c.second)
            return false;
    }

    return true;
}
// O(1) sc
// bool isAnagram(string s, string t)
// {
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());
//     if (s == t)
//         return true;
//     return false;
// }
int main()
{
    string s, t;
    cin >> s >> t;
    if (isAnagram(s, t))
        cout << "true";
    else
        cout << "false";
    return 0;
}