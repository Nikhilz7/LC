#include <bits/stdc++.h>
using namespace std;
string minWindow(string s, string t)
{
    // count of char in t string
    unordered_map<char, int> charCountofT;
    for (int i = 0; i < t.size(); i++)
        charCountofT[t[i]]++;

    int i = 0;
    int j = 0;

    // # of chars in t that must be in s
    int counter = t.size();

    int minStart = 0;
    int minLength = INT_MAX;

    while (j < s.size())
    {
        // if char in s exists in t, decrease
        if (charCountofT[s[j]] > 0)
        {
            counter--;
        }
        // if char doesn't exist in t, will be -'ve
        charCountofT[s[j]]--;
        // move j to find valid window
        j++;

        // when window found, move i to find smaller
        while (counter == 0)
        {
            if (j - i < minLength)
            {
                minStart = i;
                minLength = j - i;
            }

            charCountofT[s[i]]++;
            // when char exists in t, increase
            if (charCountofT[s[i]] > 0)
            {
                counter++;
            }
            i++;
        }
    }

    if (minLength != INT_MAX)
    {
        return s.substr(minStart, minLength);
    }
    return "";
}
int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    // cout << minWindow_without_repetation(s, t);
    cout << minWindow(s, t);
    return 0;
}
