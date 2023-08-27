/* Read input from STDIN. Print your output to STDOUT*/
#include <stdio.h>
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
int main(int argc, char *a[])
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    // cout << n << x;
    // for(int x: v){
    //     cout<<x<<" ";
    // }
    if ((n - x - 1 >= 0) && (v[n - x - 1] == v[n - x]))
    {
        cout << -1;
        return 0;
    }
    else
    {
        cout << v[n - x];
        return 0;
    }
    // Write code here
}
