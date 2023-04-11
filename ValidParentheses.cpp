#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> sch;
    unordered_map<char, char> mpp = {
        {')', '('},
        {']', '['},
        {'}', '{'},
    };

    for (auto i : s)
    {
        if (mpp.find(i) != mpp.end())
        {
            if (sch.empty())
                return false;
            if (sch.top() != mpp[i])
                return false;
            sch.pop();
        }
        else
            sch.push(i);
    }
    return sch.empty();
}
int main()
{
    string s;
    cin >> s;
    if (isValid(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}