#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> m;
    vector<vector<string>> res;
    for (auto s : strs)
    {
        string t = s;
        sort(t.begin(), t.end());
        m[t].push_back(s);
    }

    for (auto p : m)
    {
        res.push_back(p.second);
    }

    return res;
}
int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> resul = groupAnagrams(strs);
    for (auto i = 0; i < resul.size(); i++)
    {
        for (auto j = 0; j < resul.size(); j++)
        {
            cout << resul[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
