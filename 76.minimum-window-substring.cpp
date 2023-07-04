/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
class Solution
{
public:
    bool containsAllCharacters_2(string subString, multiset<char> sett)
    {
        // Tset is needed charcounts  || subString must have same

        unordered_map<char, int> charCountofT;
        unordered_map<char, int> charCountofSubString;
        for (char c : sett)
            ++charCountofT[c];
        for (char c : subString)
            charCountofSubString[c]++;
        for (char charC : sett)
        {
            if (charCountofSubString[charC] < charCountofT[charC])
                return false;
        }
        return true;
    }

    string minWindow1(string s, string t)
    {
        int n = s.size(), m = t.size(), j = 0;
        string sub = "";
        int minSubStringCount = INT_MAX;

        multiset<char> tset;
        for (char c : t)
        {
            tset.insert(c);
        }

        for (int i = 0; i < n; i++) // every char in 's'
        {
            string subString = "";
            int k = m;
            int y = m;                         // len of t
            int count = INT_MAX;               // len of subString
            if (tset.find(s[i]) != tset.end()) // if char found in set
            {
                int j = i;
                while (k > 0 && j < n) // j index of subString
                {
                    if (tset.find(s[j]) != tset.end()) // added char is found in tset
                        k--;
                    subString += s[j]; // add char of s to subString
                    j++;
                }
                // cout << subString << endl;
                if (!containsAllCharacters_2(subString, tset))
                {
                    subString = "";
                    continue;
                }
                if (subString.size() >= m && subString != "")
                {
                    int c = subString.size();
                    count = min(c, count);
                    minSubStringCount = min(minSubStringCount, count);
                    // cout << subString << " " << minSubStringCount << endl;
                    if (minSubStringCount >= count)
                    {
                        // cout << subString << " ";
                        sub = subString;
                    }
                }
            }
        }

        return sub;
    }
};
// @lc code=end
