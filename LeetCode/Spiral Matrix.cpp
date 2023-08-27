#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void onesquare(vector<vector<int>> &matrix, int &p, int &q, int &x, int &y, vector<int> &ans, int &lans)
{
    for (int i = p; i <= x; i++)
    {
        
        ans[lans]=(matrix[q][i]);
        lans++;
    }
    q++;
    for (int j = q; j <= y; j++)
    {
        ans[lans]=(matrix[j][x]);
        lans++;
    }
    x--;
    for (int i = x; i >= p; i--)
    {
        ans[lans]=(matrix[y][i]);
        lans++;
    }
    y--;
    for (int j = y; j >= q; j--)
    {
        // cout<<"ed";
        ans[lans]=(matrix[j][p]);
        lans++;
    }
    p++;
}

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int x = matrix[0].size();
    int y = matrix.size();
    int total = x * y;
    x--;
    y--;
    int p = 0, q = 0, lans = 0;
    vector<int> ans(total,0);
    while (lans < total)
    {
        
        /* code */
        onesquare(matrix, p, q, x, y, ans, lans);
    }
    
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    
    vector<int> ans = spiralOrder(matrix);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}