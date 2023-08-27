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

// #define int long long
#define pb push_back
#define input_vector(v) \
    for (auto &i : v)   \
        cin >> i;
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
#define for_dec(i, a, b) for (ll i = a - 1; i >= b; i--)
#define PrintArray(a) \
    for (auto i : a)  \
        cout << i<<endl;

bool compare_a(int a, int b)
{
    return a < b;
}
bool compare_d(int a, int b)
{
    return a > b;
}
string s[] = {
    "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int i = 0,j=0;
vector<string> solve(string d,char *anss, vector<string> &ans,int  i,int j)
{
    
    int ind = d[i] - '0';
    
    // j++;
    
    int len=d.length();
    
    if (d[i] == '\0'){
        anss[j]='\0';
        cout<<anss<<endl;
        ans.push_back(anss);
        return ans;
    }
    for ( int k = 0; s[ind][k] != '\0'; k++)
    {
        anss[j]=s[ind][k];
        // j++;
        // i++;
        solve(d,anss,ans,i+1,j+1);
        // j--;
        // i--;
    }
    i++;
    return ans;
}

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {   
        vector<string> ans;
        string digit = "23";
        int len=digit.length();
        char anss[len];

        // int n;
        // cin >> n;
        // vector<int> v(n);
        // for (int i = 0; i < n; i++) {
        //     cin >> v[i];
        // }
        solve(digit,anss,ans,0,0);
        PrintArray(ans);

    }
    return 0;
}
