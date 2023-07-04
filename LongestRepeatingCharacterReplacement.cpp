#include <bits/stdc++.h>
using namespace std;
int characterReplacement(string s, int k)
{
    int n = s.size();
    int maxFrequency[26] = {0};
    int i = 0, maxCount = 0, res = 0;
    for (int j = 0; j < n; j++)
    {
        maxCount = max(maxCount, ++maxFrequency[s[j] - 'A']); // incrementing the frequency of alphabet
        while ((j - i + 1) - maxCount > k)                    // check if the window is valid
        {
            maxFrequency[s[i] - 'A']--;
            i++;
        }
        res = max(res, j - i + 1);
    }
    return res;
}
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    cout << characterReplacement(s, n);
    return 0;
}
