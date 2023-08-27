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
#include <algorithm> //find, bool binary_search, *min_element, next_permutation(a,a+n)
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
// void PrintArray(int a[],int n){
//     for (int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout <<endl;
// }

bool compare_a(int a, int b)
{
    return a < b;
}
bool compare_d(int a, int b)
{
    return a > b;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> day(n, 0);
        vector<int> job(n);
        // vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            job[i] = v[i] * (i + 1);
        }

        sort(job.begin(), job.end());
        for (int j = 0; j < k; j++)
        {
            int mini = 0;
            int i;
            for (i = 0; i < n; i++)
            {
                // cout<<i<<" i"<<endl;
                // for (auto x : day)
                // {
                //     cout << x << " ";
                // }
                // cout << "\n";

                if ((day[i]+job[i]) <= (day[mini]+job[mini]))
                {
                    mini = i;
                }
                // else
                // {
                //     mini = i + 1;
                // }
            }
            // if ((day[i]+job[i]) <= (day[i + 1]+job[i]))
            //     {
            //         mini = i;
            //     }
            day[mini] += job[mini];
        }
        // for (auto x : day)
        // {
        //     cout << x << " ";
        // }
        // cout << "\n";
        cout << *max_element(day.begin(), day.end()) << endl;
    }
    return 0;
}
