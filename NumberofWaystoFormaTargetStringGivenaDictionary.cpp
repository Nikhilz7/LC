#include <bits/stdc++.h>
using namespace std;
int numWays(vector<string> &words, string target)
{
    int count = 0;
    for (auto word : words)
    {
        string temp = "";
        for (int i = 0; i < word.length(); i++)
        {
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<string> words;
    string temp;
    while (n--)
    {
        cin >> temp;
        words.push_back(temp);
    }
    string target;
    cin >> target;
    cout << numWays(words, target) << endl;
    return 0;
}