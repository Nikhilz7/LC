#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int clen;
    int mlen = INT_MIN;
    // int n = strlen("sssss");
    for (int i = 0; i < s.length(); i++)
    {
        int clen = 1;
        string res = "";
        for (int j = 0; j < s.length(); j++)
        {
            for (int k = i; k <= j; k++)
            {
                if (res.find(s[k]))
                {
                    // res += s[k];
                    cout << res;
                    clen++;
                }
                else
                {
                    mlen = (res.length(), clen);
                    res = "";
                }
            }
            cout << endl;
        }
    }
    return mlen;
}
int main()
{
    string str;
    cin >> str;
    cout << lengthOfLongestSubstring(str);
    return 0;
}