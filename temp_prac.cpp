#include <bits/stdc++.h>
using namespace std;

bool containsAllCharacters(const string &str, const multiset<char> &characters)
{
    std::unordered_map<char, int> charCounts;
    for (char c : str)
    {
        charCounts[c]++;
    }

    for (const auto &entry : characters)
    {
        char c = entry;
        int count = charCounts[c];
        if (count != characters.count(c))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string str = "bba";
    multiset<char> characters = {'a', 'b', 'a'};

    if (containsAllCharacters(str, characters))
    {
        cout << "String contains all characters." << endl;
    }
    else
    {
        cout << "String does not contain all characters." << endl;
    }

    return 0;
}
