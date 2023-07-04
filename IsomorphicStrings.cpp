#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    unordered_map<char, char> mppStoT;
    unordered_map<char, char> mppTtoS;
    for (int i = 0; i < s.length(); i++)
    {
        // if not found add maps s-t and t-s
        if ((mppStoT.find(s[i]) == mppStoT.end()) && mppTtoS.find(t[i]) == mppTtoS.end())
        {
            mppStoT[s[i]] = t[i];
            mppTtoS[t[i]] = s[i];
        }
        // Either mapping doesn't exist in one of the dictionaries or Mapping exists and
        // it doesn't match in either of the dictionaries or both
        else if (!(mppStoT[s[i]] == t[i] && mppTtoS[t[i]] == s[i]))
            return false;
    }
    return true;
}

/*      s -> t
        p   t
        a   i
        p   t
        p   t
        e   l
        r   e

 */

int main()
{
    string s, t;
    cin >> s >> t;
    if (isIsomorphic(s, t))
        cout << "true";
    else
        cout << "false";
    return 0;
}