#include <bits/stdc++.h>
using namespace std;
string mergeAlternately(string word1, string word2)
{
    // TWO POINTER
    string newword = "";
    int i = 0, j = 0;
    int m = word1.length();
    int n = word2.length();
    while (i < m || j < n)
    {
        if (i < m)
            newword += word1[i];
        if (j < n)
            newword += word2[j];
        i++;
        j++;
    }
    return newword;
}
string mergeAlternately(string word1, string word2)
{
    // ONE POINTER
    string newword = "";
    int i = 0, m = max(word1.length(), word2.length());
    int w1 = word1.length();
    int w2 = word2.length();
    while (i < m)
    {
        if (i < w1)
            newword += word1[i];
        if (i < w2)
            newword += word2[i];
        i++;
    }
    return newword;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << mergeAlternately(s1, s2) << endl;
    return 0;
}