#include <bits/stdc++.h>
using namespace std;
/* void print(stack<char> s)
{
    if (s.empty())
    {
        cout << endl;
        return;
    }
    char x = s.top();
    s.pop();
    print(s);
    s.push(x);
    cout << x;
}
string rev_str(string str)
{
    string rev = "", x = str;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }
    cout << rev;
    return rev;
}
*/
string removeStars(string s)
{
    stack<char> sch;
    for (auto i : s)
    {
        if (i == '*')
        {
            sch.pop();
        }
        else
        {
            sch.push(i);
        }
    }
    // print(sch);
    string res = "";
    while (!sch.empty())
    {
        res += sch.top();
        sch.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string s, res;
    cin >> s;
    res = removeStars(s);
    cout << res;

    return 0;
}