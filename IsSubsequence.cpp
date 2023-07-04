#include <bits/stdc++.h>
using namespace std;
bool isSubsequence(string s, string t)
{
    int m = t.length();
    int i = 0;
    int j = 0;

    while (j < m)
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
            j++;
    }
    if (i == s.length())
        return true;
    return false;
}
int main()
{
    string s, t;
    cin >> s >> t;
    if (isSubsequence(s, t))
        cout << "true";
    else
        cout << "false";
    return 0;
}