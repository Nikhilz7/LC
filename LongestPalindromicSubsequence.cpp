#include <bits/stdc++.h>
using namespace std;
// vector<string> memo;
bool palin(int i, int n, string str)
{
    if (i >= n / 2)
        return true;
    if (str[i] != str[n - i - 1])
        return false;
    return palin(i + 1, n, str);
    return true;
}
int longestPalindromeSubseq(string s)
{
    string subsq = "";
    string temp = "";
    for (int i = 0; i < s.length() - 1; i++)
    {
        temp += s[i];
        cout << temp << endl;
        for (int j = i + 1; j < s.length(); j++)
        {

            temp += s[j];
            if (palin(0, temp.length(), temp))
            {
                subsq = temp;

                cout << subsq << endl;
            }
            // temp.erase(s[j], 1);
        }
    }
    return subsq.length();
}
int main()
{
    string s;
    cin >> s;
    cout << longestPalindromeSubseq(s) << endl;
    return 0;
}