#include <bits/stdc++.h>
using namespace std;
bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }

    return false;
}

char toLower(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string s)
{
    int st = 0, e = s.length() - 1;
    while (st < e)
    {
        if (s[st] != s[e])
        {
            return false;
        }
        else
        {
            st++;
            e--;
        }
    }
    return true;
}
bool isPalindrome(string s)
{
    string temp = "";
    for (int j = 0; j < s.length(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    // lowercase
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLower(temp[j]);
    }

    return checkPalindrome(temp);
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