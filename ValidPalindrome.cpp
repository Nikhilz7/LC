#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;
// bool palin(int i, int n, string str)
// {
//     if (i >= n / 2)
//         return true;
//     if (str[i] != str[n - i - 1])
//         return false;
//     return palin(i + 1, n, str);
//     return true;
// }
// bool isPalindrome(string s)
// {
//     int i = 0, j = s.length() - 1;
//     while (i < j)
//     {
//         if (!isalnum(s[i]))
//             i++;
//         else if (!isalnum(s[j]))
//             j--;
//         else if (tolower(s[i]) != tolower(s[j]))
//             return false;
//         else
//         {
//             i++;
//             j--;
//         }
//     }
//     return true;
// }

string removeSpaces(string line)
{
    string temp = "";
    line.erase(remove(line.begin(), line.end(), ' '), line.end());
    for (int i = 0; i < line.size(); ++i)
    {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= '0' && line[i] <= '9'))
        {
            temp = temp + line[i];
        }
    }
    line = temp;
    transform(line.begin(), line.end(), line.begin(), ::tolower);
    return line;
}
bool palin(int i, int n, string str)
{
    if (i >= n / 2)
        return true;
    if (str[i] != str[n - i - 1])
        return false;
    return palin(i + 1, n, str);
    return true;
}
bool isPalindrome(string s)
{
    if (s == " " || s == ".")
        return true;
    // if (s.length() == 2)
    // {
    //     if (isdigit(s[0]))
    //         return false;
    //     else if (!isascii(s[1]))
    //         return true;
    // }
    string res = removeSpaces(s);
    // string rev = "";
    // for (int i = res.length() - 1; i >= 0; i--)
    // {
    //     rev += res[i];
    // }
    if (palin(0, res.length(), res))
        return true;
    else
        return false;
    // cout << rev;
    // if (res == rev)
    // {
    //     cout << res << " " << rev << endl;
    //     return true;
    // }
    // else
    //     return false;
}

int main()
{
    string str;
    getline(cin, str);
    if (isPalindrome(str))
        cout << "true";
    else
        cout << "false";
    return 0;
}