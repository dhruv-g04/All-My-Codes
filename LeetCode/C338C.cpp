#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // cout<<;
    int n = 3;
    int mat[n][n];

    memset(mat, 0, sizeof(mat));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j];
        }
    }
    return 0;
}

// long long matrixSumQueries(int n, vector<vector<int>> &queries)
// {
//     // int a[n][n];
//     long long int ans;
//     int mat[n][n];

//     memset(mat, 0, sizeof(mat));
//     vector<int> r(n,0);
//     vector<int> c(n,0);
//     int l=queries.size();
//     for(int i=0;i<l;i++){
//         if(queries[i][0]==0){
//             c[queries[i][1]]+=queries[i][2];
//         }
//         if(queries[i][0]==1){
//             r[queries[i][1]]+=queries[i][2];
//         }
//     }
//     for
// }

long long matrixSumQueries(int n, vector<vector<int>> &queries)
{
    long long int ans=0;
    int l = queries.size();
    vector<int> r(n, 0);
    vector<int> c(n, 0);
    int nr = 0, nc = 0;
    for (int i = l - 1; i >= 0; i--)
    {
        if (queries[i][0] == 0)
        {
            if (r[queries[i][1]] == 0)
            {
                nr++;
                r[queries[i][1]] = n;
                ans += (n - nc) * queries[i][2];
            }

            // c[queries[i][1]]+=queries[i][2];
        }
        if (queries[i][0] == 1)
        {
            if (c[queries[i][1]] == 0)
            {
                nc++;
                c[queries[i][1]] = n;
                ans += (n - nr) * queries[i][2];
            }

            // c[queries[i][1]]+=queries[i][2];
        }
    }
    return ans;
}