#include <bits/stdc++.h>
using namespace std;
void generateMatrix(int n)
{
    vector<vector<int>> mat;
    int d = n * n;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << c << " ";
            mat[i][j - 1] = c;
            c++;
        }
        cout << endl;
    }
    // return mat;
}
int main()
{
    int n;
    cin >> n;
    generateMatrix(n);
    // vector<vector<int>> mat = generateMatrix(n);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}