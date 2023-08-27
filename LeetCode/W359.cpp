#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// \\\\\\\\\\\\\\\A\\\\\\\\/

// \\\\\\\\\\\\\\\B\\\\\\\\/

// \\\\\\\\\\\\\\\C\\\\\\\\/

int solve(int s, int &n, int end, vector<int> &dp, vector<vector<int>> &v)
{
    if (s >= n)
    {
        return 0;
    }
    if (v[s][0] < end)
    {
        return solve(s + 1, n, end, dp, v);
    }
    if (dp[s] != -1)
        return dp[s];
    return dp[s] = max(solve(s + 1, n, end, dp, v), v[s][2] + solve(s + 1, n, v[s][1], dp, v));
}
// int maximizeTheProfit(int n, vector<vector<int>> &off)
// {
//     int n=pt.size();
//         vector<pair<pair<int,int>,int>> v(n);
//         for(int i=0;i<n;i++)
//         {
//           v[i]={{st[i],et[i]},pt[i]};
//         }
//         sort(v.begin(),v.end());
//         vector<int> dp(n+1,-1);
//         return solve(v,0,dp);
//     // vector<vector<int>> v;
//     // int i;
//     // for (i = 0; i < n; i++)
//     // {
//     //     v.push_back({off[i][0], off[i][1], off[i][2] * (off[i][1] - off[i][0] + 1)});
//     // }
//     // sort(v.begin(), v.end());
//     // vector<int> dp(n, -1);
//     // return solve(0, n, 0, dp, v);
// }

int getnext(vector<pair<pair<int, int>, int>> &v, int l, int end)
{
    int n = v.size();
    int h = n - 1;
    int res = n;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (v[mid].first.first >= end)
        {
            res = mid;
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    return res;
}

int solve(vector<pair<pair<int, int>, int>> &v, int i, vector<int> &dp)
{
    if (i == v.size())
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int take = 0;
    int next = getnext(v, i + 1, v[i].first.second);
    {
        take = v[i].second + solve(v, next, dp);
    }
    int ntake = solve(v, i + 1, dp);
    return dp[i] = max(take, ntake);
}
int maximizeTheProfit(int m, vector<vector<int>> &off)
{
    int n = off.size();
    vector<pair<pair<int, int>, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = {{off[i][0], off[i][1]}, off[i][2]};
    }
    sort(v.begin(), v.end());
    vector<int> dp(n + 1, -1);
    return solve(v, 0, dp);
}

int main()
{
    vector<char> vc = {};
    vector<int> v = {2, 3, 7, 9, 3};
    vector<int> v2 = {91, 50};
    int n = 5;
    cout << "";

    return 0;
}