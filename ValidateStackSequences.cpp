#include <bits/stdc++.h>
using namespace std;
bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
{
    stack<int> temp;
    int n, k = 0;
    for (int i = 0; i < pushed.size(); i++)
    {
        temp.push(pushed[i]);

        while (!temp.empty() && temp.top() == popped[k]) // stack is not empty and top value equal to popped first
        {
            temp.pop();
            k++;
        }
    }
    return temp.empty();
}
/*
pushed  popped
    2       1
    1       2
    0       0

    5       4
    4       3
    3       5
    2       1
    1       2
 */
int main()
{
    int n, m;
    int temp;
    vector<int> pushed, popped;
    cin >> n;
    m = n;
    while (n--)
    {
        cin >> temp;
        pushed.push_back(temp);
    }
    while (m--)
    {
        cin >> temp;
        popped.push_back(temp);
    }
    cout << endl;
    if (validateStackSequences(pushed, popped))
        cout << "true";
    else
        cout << "false";
    return 0;
}