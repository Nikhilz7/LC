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
string simplifyPath(string path)
{
    vector<string> sch;
    int start = 1, i = 1, n = path.length();
    while (i <= n)
    {
        if (i == n || path[i] == '/')
        {
            string f = path.substr(start, i - start);
            if (f.size())
            {
                if (f == "..")
                {
                    if (sch.size())
                        sch.pop_back();
                }
                else if (f != ".")
                    sch.push_back(f);
            }
            start = i + 1;
        }
        i++;
    }
    string res = "";
    for (string ch : sch)
        res += "/" + ch;
    return res == "" ? "/" : res;
}
/*
top

string simplifyPath(string path) {
        stack<string>st;

        for(int i=0;i<path.size();i++){
            if(path[i]=='/') continue;

            string temp="";

            while(i<path.size() && path[i]!='/'){
                temp+=path[i];
                i++;
            }

            if(temp=="."){
                continue;
            }
            else if(temp==".."){
                if(!st.empty()) st.pop();
            }else{
                st.push(temp);
            }
        }

        string res="";

        while(!st.empty()){
            res='/'+st.top()+res;
            st.pop();
        }

        if(res.size()==0) return "/";

        return res;
    }


 */
/* string simplifyPath(string path)
{
    stack<char> sch;
    string r = "/";
    bool found = false;
    for (auto i : path)
    {
        if (sch.empty())
        {
            sch.push(i);
            continue;
        }
        else if (i == '.' && !sch.empty())
        {
            for (int i = path.length() - 1; i >= 0; i--)
            {
                if (isalpha(path[i]))
                {
                    r += path[i];
                    return r;
                }
            }
            // char index = path[path.length() - 2];
            // if (index != '.')
            //     r += index;
        }
        else if (found == false && i != '/')
        {
            sch.push(i);
        }
        else if (found == false && i == '/')
        {
            found = true;
        }
        else if (found == true && i == '/')
        {
            found = false;
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
} */
int main()
{
    string s, res;
    cin >> s;
    res = simplifyPath(s);
    cout << endl
         << res;

    return 0;
}