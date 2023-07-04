#include <bits/stdc++.h>
using namespace std;
// tc need O(m + n)
/*
    ADOBECODEBANC ABC
    BANC
*/

// bool contains_all_characters(string subString, multiset<char> sett)
// {
//     int y = sett.size();
//     for (int x = 0; x < subString.length(); x++)
//     {
//         if (sett.find(subString[x]) != sett.end())
//         {
//             y--;
//             sett.erase(subString[x]);
//         }
//     }
//     if (y == 0)
//         return true;
//     return false;
// }

// bool containsAllCharacters(string subString, multiset<char> sett)
// {
//     unordered_map<char, int> charCount;
//     for (char c : subString)
//         charCount[c]++;
//     for (char charC : sett)
//     {
//         char c = charC;
//         int count = charCount[c];
//         if (count != sett.count(c))
//             return false;
//     }
//     return true;
// }
// bool containsAllCharacters_2(string subString, multiset<char> sett)
// {
//     // Tset is needed charcounts  || subString must have same

//     unordered_map<char, int> charCountofT;
//     unordered_map<char, int> charCountofSubString;
//     for (char c : sett)
//         ++charCountofT[c];
//     for (char c : subString)
//         charCountofSubString[c]++;
//     for (char charC : sett)
//     {
//         if (charCountofSubString[charC] < charCountofT[charC])
//             return false;
//     }
//     return true;
// }

string minWindow1(string s, string t)
{
    int n = s.size(), m = t.size();
    int minSubStringCount = INT_MAX;
    int start_index = 0;
    // count of char in t string
    unordered_map<char, int> charCountofT;
    for (int c = 0; c < t.size(); c++)
        charCountofT[t[c]]++;
    int j = 0, i = 0;
    while (j < n) // every char in 's'
    {
        if (charCountofT[s[j]] > 0) // if char found in set
            m--;

        charCountofT[s[j]]--; // decrement the count, if doesn't exist it will be -ve
        j++;

        while (m == 0) // valid window where all t chars are found in substring of t
        {
            if (j - i < minSubStringCount) // check if length of substring is less than min, yes? change indeces
            {
                start_index = i;
                minSubStringCount = j - i;
            }
            charCountofT[s[i]]++; // increment char count since it tranversed
            // char is in T, increase counter
            if (charCountofT[s[i]] > 0)
                m++;
            i++;
        }
    }
    if (minSubStringCount != INT_MAX)
        return s.substr(start_index, minSubStringCount);
    return "";
}

int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    cout << minWindow1(s, t);
    // cout << minWindow(s, t);
    return 0;
}
