#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// \\\\\\\\\\\\\\\\A\\\\\\\\\\\\\\\\/
// bool isGood(vector<int> &nums)
// {
//     int n=nums.size();
//     if(n==1){
//         return false;
//     }
//     sort(nums.begin(), nums.end());
//     if(nums[n-1]==nums[n-2] and nums[n-1]==(n-1)){
//         return true;
//     }
//     // else{
//         return false;
//     // }
// }

// \\\\\\\\\\\\\\\\B\\\\\\\\\\\\\\\\/

// string sortVowels(string s)
// {
//     unordered_map<int, bool> m;
//     m['a'] = 1;
//     m['e'] = 1;
//     m['i'] = 1;
//     m['o'] = 1;
//     m['u'] = 1;
//     m['A'] = 1;
//     m['E'] = 1;
//     m['I'] = 1;
//     m['O'] = 1;
//     m['U'] = 1;
//     vector<char> vol;
//     for (char x : s)
//     {
//         if (m[x] == 1)
//         {
//             vol.push_back(x);
//         }
//     }
//     sort(vol.begin(), vol.end());
//     string ans = "";
//     int i = 0;
//     for (auto x : s)
//     {
//         if (m[x] == 1)
//         {
//             ans += vol[i++];
//         }
//         else
//         {
//             ans += x;
//         }
//     }
//     return ans;
// }

// long long rec(vector<int> &nums, int x, int i, bool odd, vector<vector<long long>> &dp)
// {
//     if (i >= nums.size())
//     {
//         return 0;
//     }
//     if(dp[i][odd]!=-1){
//         return dp[i][odd];
//     }
//     long long inc = rec(nums, x, i + 1, nums[i] % 2,dp) + nums[i];
//     if (odd == 1 and nums[i] % 2 == 0)
//     {
//         inc -= x;
//     }
//     else if (odd == 0 and nums[i] % 2 == 1)
//     {
//         inc -= x;
//     }
//     long long exc = rec(nums, x, i + 1, odd,dp);
//     return dp[i][odd]=max(inc, exc);
// }

// long long maxScore(vector<int> &nums, int x)
// {
//     int n = nums.size();
//     vector<vector<long long>> dp(n, vector<long long>(2, -1));
//     return rec(nums, x, 0, nums[0] % 2, dp);
// }
// \D//////////////////////
int numberOfWays(int n, int x)
{
    vector<int> dp(n + 1, 0);
    dp[0]=0;
    for(int i=0;pow(i,x)<=n;i++){
        dp[i]=
    }
}

int main()
{
    vector<char> vc = {};
    vector<int> v = {23};
    vector<int> v2 = {2, 4, 6, 8};
    int n = 5;
    string s = "l";

    cout << numberOfWays(25, 2);

    return 0;
}