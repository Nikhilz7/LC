#include <bits/stdc++.h>
using namespace std;
int longestPalindrome(string s)
{
    int n = s.length();
    int counterOdd = 0;
    // char | count
    unordered_map<char, int> charCount;
    for (char ch : s)
    {
        charCount[ch]++;
        if (charCount[ch] % 2 == 1)
            counterOdd++;
        else
            counterOdd--;
    }
    return (counterOdd > 1) ? (n - counterOdd + 1) : n;
}
int main()
{
    string s;
    cin >> s;
    cout << longestPalindrome(s);
    return 0;
}