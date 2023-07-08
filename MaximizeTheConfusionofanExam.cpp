#include <bits/stdc++.h>
using namespace std;
int maxConsecutiveAnswers(string s, int k)
{
    int maxLen = 0, n = s.size(), i = 0, j = 0;
    int falsec = 0, truec = 0;
    while (i < n)
    {
        if (s[i] == 'F')
            falsec++;
        else
            truec++;
        while (min(falsec, truec) > k)
        {
            if (s[j++] == 'F')
                falsec--;
            else
                truec--;
        }
        maxLen = max(maxLen, i - j + 1);
        i++;
    }
    return maxLen;
}
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << maxConsecutiveAnswers(s, k);
    return 0;
}