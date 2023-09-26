#include <bits/stdc++.h>
using namespace std;
bool inorder(string str1, string str2)
{
    int a = str1.length(), b = str2.length();
    int n = a < b ? a : b;
    if (a > b)
    {
        swap(str1, str2);
        swap(a, b);
        n = a;
    }

    int i = 0, j = 0;
    while (i < n)
    {

        if (str1[i] == str2[j])
        {
            i++;
            j++;
            // cout << str1 << " " << str2 << endl;
        }
        else if (j == b)
            return false;
        else
        {
            // cout << str1[i] << " " << str2[j] << endl;
            j++;
        }
    }
    return (i == n) ? true : false;
}
int longestStrChain(vector<string> &words)
{
    int maxChain = 1;
    int currChain = 1;
    int n = words.size();

    int i = 0, j = 1;
    while (i < n && j < n)
    {
        if (inorder(words[i], words[j]))
        {
            currChain++;
            maxChain = max(currChain, maxChain);
            i++;
            j++;
        }
        else
        {
            j++;
            currChain = 1;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (inorder(words[i], words[i + 1]))
    //         currChain++;
    //     else
    //         currChain = 1;
    //     maxChain = max(currChain, maxChain);
    //     // cout << maxChain << endl;
    // }
    return maxChain;
}
int main()
{
    vector<string> words;
    int n;
    cin >> n;
    string temp;
    while (n--)
    {
        cin >> temp;
        words.push_back(temp);
    }
    cout << longestStrChain(words) << endl;
}
