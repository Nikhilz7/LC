#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    int clen = 0;
    int i = 0, j = 0;
    int n = s.size();
    unordered_set<char> ss;
    while (i < n && j < n)
    {
        if (ss.find(s[j]) == ss.end())
        {
            ss.insert(s[j++]);
            clen = max(clen, j - i);
        }
        else
        {
            ss.erase(s[i++]);
        }
    }
    return clen;
}
int main()
{
    string str;
    getline(cin, str);
    cout << lengthOfLongestSubstring(str);
    return 0;
}