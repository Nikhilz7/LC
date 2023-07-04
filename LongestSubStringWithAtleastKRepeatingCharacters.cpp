#include <bits/stdc++.h>
using namespace std;
int longestSubstring(string s, int k)
{
    int clen = 0;
    int i = 0, j = 0;
    int n = s.size();
    unordered_map<char, int> charCountofS;
    for (int i = 0; i < n; i++)
        charCountofS[s[i]]++;
    while (j < n)
    {
        if (charCountofS[s[i]] > 0) // if char exists;
            k--;
        charCountofS[s[i]]--;
        j++;
        while (k == 0)
        {
            if (j - i > clen) // check if length of substring is less than min, yes? change indeces
            {
                // start_index = i;
                clen = j - i;
            }
            charCountofS[s[i]]++; // increment char count since it tranversed
            // char is in T, increase counter
            if (charCountofS[s[i]] > 0)
                k++;
            i++;
        }
    }
    return clen;
}
int main()
{
    string str;
    cin >> str;
    int k;
    cin >> k;
    cout << longestSubstring(str, k);
    return 0;
}