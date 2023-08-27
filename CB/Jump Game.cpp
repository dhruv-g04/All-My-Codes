#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int jump = 0;
int solve(vector<int> a, int n, int i)
{
    int maxi;
    // cout << i<<" start" << endl;
    if (a[i] == 0)
    {
        return -1;
    }
    if (i >= n - 1)
    {
        return jump;
    }
    if ((i + a[i]) >= (n - 1))
    {
        return jump + 1;
    }

    jump++;
    maxi = a[i] + i;
    int tempmaxi=maxi;
    int storek;
    // cout << maxi << " !=" << endl;
    for (int k = i + 1; k <= tempmaxi; k++)
    {
        // cout << k << " loop !=" << endl;
        maxi = max(maxi, k + a[k]);
        if (maxi==(k + a[k])){
            storek=k;
        }

    }
    // cout << i << " after !=" << endl;
    // jump++;
    i = maxi;
    // cout << i << " rec" << endl;
    return solve(a, n, storek);
}

int main()
{
    vector<int> a{2, 3, 1, 1, 4};
    int n = 5;

    cout << solve(a, n, 0);

    return 0;
}