#include <bits/stdc++.h>
using namespace std;
bool palin(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
            return false;
    }
    return true;
}
int countSubstrings(string s)
{
    int n = s.length(), indc = 0, count = 0;
    string currentstring = "";
    for (int i = 0; i < n; i++)
    {
        currentstring += s[i];
        indc++;
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] != s[j])
            {
                if (indc > 0)
                    indc--;
                if (palin(currentstring))
                    count++;
            }
            
        }
    }
    return count + indc;
}

int main()
{
    string s;
    cin >> s;
    cout << countSubstrings(s) << endl;
    // palin(s) ? cout << "true" : cout << "false";
    return 0;
}