#include <bits/stdc++.h>
#include <climits> //INT_MAX and INT_MIN
#include <cmath>   //
#include <map>     //
#include <string>
#include <array>
#include <cstring>
#include <vector>
#include <set>
#include <tuple>
#include <cstdio>
#include <complex>

using namespace std;

#define int long long
#define pb push_back
#define input_vector(v) \
    for (auto &i : v)   \
        cin >> i;
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
#define for_dec(i, a, b) for (ll i = a - 1; i >= b; i--)
#define PrintArray(a) \
    for (auto i : a)  \
        cout << i;

bool compare_a(int a, int b)
{
    return a < b;
}
bool compare_d(int a, int b)
{
    return a > b;
}

void solve()
{

    return;
}
const int N=51, P=51*30;
int n,k;
int cache[N][P];
vector<vector<int>> sum;
// void cumulative_sum(int n, vector<int> &a, vector<int> &cum_arr)
// {
//     cout << "Hi" << endl;
//     int sum = 0;
//     cout << n << endl;
//     for (int w = 0; w<n; w++)
//     {
//         // cout<<w<<" : w"<<endl;
//         sum = sum + a[w];
//         cum_arr[w] = sum;
//         cout <<sum<<" :sum \n";
//         cout << "or\n";
//     }
//     return;
// }
vector<int> cumulative_sum(const vector<int> &nums)
{
    vector<int> result(nums.size());
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        result[i] = sum;
    }
    return result;
}

int rec(int p, int i)
{ // x is no. of stack
    // cout << "hello\n";
    int maxt = 0;
    if (p > 0 && i >= n)
    {
        return INT_MIN;
    }

    if (p <= 0 || i >= n)
    {
        return 0;
    }
    if (cache[i][p]!=-1){
        return cache[i][p];
    }
    maxt = rec(p, i + 1);
    for (int j = 1; j <= min(p, k); j++)
    {
        maxt = max(sum[i][j - 1] + rec(p - j, i + 1), maxt);
    }
    cache[i][p]=maxt;
    return maxt;
}


signed main()
{
    int t = 1;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
    memset(cache,-1,sizeof(cache));
        // cout << q;
        int p;
        cin >> n >> k >> p;
        vector<vector<int>> v(n);

        for (int j = 0; j < n; j++)
        {
            vector<int> temp1(k);
            vector<int> temp2(k);

            for (int i = 0; i < k; i++)
            {
                cin >> temp1[i];
                // cout << "to\n";
            }
            // cout << "GO\n";
            // cout << "me\n";
            temp2 = cumulative_sum(temp1);
            // for (auto n : temp2)
            // {
            //     cout << n << " ";
            // }
            // cout << endl;
            sum.push_back(temp2);
            v[j] = temp1;
        }
        // for (auto x:sum){
        //     for (auto y:x){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        // solve();
        cout << "Case #" << q << ": " << rec(p, 0) << endl;
        sum.clear();
    }
    return 0;
}
