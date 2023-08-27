#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int specialPerm(vector<int> &v)
{
    int n = v.size();
    vector<vector<int>> all;
    int c = 0;
    const int M = 1e9 + 7;
    do
    {
        all.push_back(v);
    } while (std::next_permutation(v.begin(), v.end()));

    for (auto x : all)
    {
        int i;
        for (i = 0; i < n-1; i++)
        {
            if ( (x[i] % x[i + 1] == 0 or x[i + 1] % x[i] == 0))
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if (i == n - 1)
        {
            // for (int y : x)
            // {
            //     cout << y << " ";
            // }
            // cout << endl;
            c++;
            c=c%M;
        }
    }
    // cout<<all.size();
    return c%M;
}
int main()
{
    vector<int> v = {20, 100, 50, 5, 10, 70, 7};
    // cout<<;
    cout << specialPerm(v);
    return 0;
}
