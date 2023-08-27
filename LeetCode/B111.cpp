#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// \\\\\\\\\\\\\\\A\\\\\\\\/
int countPairs(vector<int> &nums, int target)
{
    int c = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] < target)
            {
                c++;
            }
        }
    }
    return c;
}

// \\\\\\\\\\\\\\\B\\\\\\\\/
bool canMakeSubsequence(string str1, string str2)
{
    auto x = str1.find(str2);
    if (str2.size() > str1.size())
    {
        return false;
    }
    // if (x != string::npos)
    // {
    //     return true;
    // }
    int n = str1.size();
    int m = str2.size();
    int j = 0;
    for (int i = 0; i < n and j < m; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else if ((((str1[i] - 'a') + 1) % 26) + 'a' == str2[j])
        {
            j++;
        }
    }
    if (j >= m)
        return true;
    return false;
}

// bool canMakeSubsequence(string s1, string s2)
// {
//             if (s2.length() > s1.length())
//     {
//                     return false;
//                
//     }
//             int t = 0;
//             for (int i = 0; i < s1.length() && t < s2.length()  ; i++)
//     {
//                     if (s1[i] == s2[t])
//         {
//             t++;
//                        
//         }
//         else if (((s1[i] - 'a') + 1) % 26 + 'a' == s2[t])
//         {
//                             t++;
//                        
//         }
//                
//     }
//            
//         return t == s2.length();
//        
// }
// \\\\\\\\\\\\\\\C\\\\\\\\/
// int minimumOperations(vector<int> &nums)
// {
//     vector<int> v;
//     v = nums;
//     int c = 0;
//     sort(v.begin(), v.end());
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (v[i] != nums[i])
//         {
//             c++;
//         }
//     }
//     return c;
// }

int minimumOperations(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> dp(n + 1, vector<int>(4, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (j == nums[i])
            {
                dp[i + 1][j] = 1 + dp[i][j];
            }
            else
            {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }

    int c= n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            for (int k = j; k <= n; k++)
            {
                int thin = dp[k][3] - dp[j][3];
                int doo = dp[j][2] - dp[i][2];
                int ek = dp[i][1];
                
                c = min(c, n - ek - doo - thin);
            }
        }
    }
    return c;
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