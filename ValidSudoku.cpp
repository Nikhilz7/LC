#include <bits/stdc++.h>
using namespace std;
/*
for(auto i=0;i<9;i++){
            unordered_map<char,unordered_map<char,char>> mppcol;
            for(auto j=0;j<9;j++){
                if (board[i][j] == '.')
                    continue;
                if(mppcol.find(board[i][j]) == mppcol.end())
                    mppcol[i][j]=board[i][j];
                else return false;
            }
        }
        return true;
 */
bool isValidSudoku(vector<vector<char>> &board)
{
    const int n = 9;
    bool row[n][n] = {false};
    bool col[n][n] = {false};
    bool sub[n][n] = {false};
    for (int r = 0; r < n; ++r)
    {
        for (int c = 0; c < n; ++c)
        {
            if (board[r][c] == '.')
                continue; // if not number pass

            int idx = board[r][c] - '0' - 1; // char to num idx
            int area = (r / 3) * 3 + (c / 3);

            // if number already exists
            if (row[r][idx] || col[c][idx] || sub[area][idx])
            {
                return false;
            }

            row[r][idx] = true;
            col[c][idx] = true;
            sub[area][idx] = true;
        }
    }
    return true;
    // unordered_map<int, char> mpprow;
    // for (auto i = 0; i < 9; i++)
    // {
    //     for (auto j = 0; j < 9; j++)
    //     {
    //         if (board[i][j] == '.')
    //             continue;
    //         if (mpprow.find(board[i][j]) == mpprow.end())
    //         {
    //             int key = i / 3;

    //             mpprow[i] = board[i][j];
    //         }
    //         else
    //             return false;
    //     }
    // }
    // return true;
}
int main()
{
    vector<vector<char>> board = {{'8', '3', '.', '.', '7', '.', '.', '.', '.'}, {'6', '.', '.', '1', '9', '5', '.', '.', '.'}, {'.', '9', '8', '.', '.', '.', '.', '6', '.'}, {'8', '.', '.', '.', '6', '.', '.', '.', '3'}, {'4', '.', '.', '8', '.', '3', '.', '.', '1'}, {'7', '.', '.', '.', '2', '.', '.', '.', '6'}, {'.', '6', '.', '.', '.', '.', '2', '8', '.'}, {'.', '.', '.', '4', '1', '9', '.', '.', '5'}, {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    // int temp;
    // for (int i = 0; i < 9; i++)

    // {
    //     for (int j = 0; j < 9; j++)
    //     {
    //         cin >> temp;
    //         board[i][j] = temp;
    //     }
    // }
    if (isValidSudoku(board))
        cout << "true";
    else
        cout << "false";
    return 0;
}

/*
8 3 . . 7 . . . . 6 . . 1 9 5 . . . . 9 8 . . . . 6 .
8 . . . 6 . . . 3 4 . . 8 . 3 . . 1 7 . . . 2 . . . 6
. 6 . . . . 2 8 . . . . 4 1 9 . . 5 . . . . 8 . . 7 9
*/