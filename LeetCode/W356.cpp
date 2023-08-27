#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//////////////A\/\\////

//////////////B\/\\////
vector<int> len(1001, -1);

int lenth(int l, int n)
{
    if (l > n)
    {
        return 0;
    }
    if (len[l] != -1)
    {
        return len[l];
    }
    int ans = lenth(l + 1, n) + (l * (l + 1)) / 2;
    len[l] = ans;
    return ans;
}
// int countCompleteSubarrays(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> dp(2001, -1);
//     vector<int> sub(2001, -1);
//     int c = 0, ct = 0;
//     for (int x : nums)
//     {
//         if (sub[x] == -1)
//         {
//             ct++;
//         }
//         sub[x]++;
//     }
//     int i = 0;
//     c = 0;
//     int ans = 0;
//     for (int j = 0; j < n; j++)
//     {
//         if (c == ct)
//         {
//             ans += lenth(j - i + 1, n);
//             cout<<ans<<":a ";
//             dp[nums[i]]--;
//             if (dp[nums[i]] == 0)
//             {
//                 c--;
//             }
//             i++;
//         }
//         if (dp[nums[j]] == -1)
//         {
//             c++;
//         }
//         dp[nums[j]]++;
//     }
//     if (c == ct)
//     {
//         ans += lenth(n - 1 - i + 1, n);
//         dp[nums[i]]--;
//         i++;
//     }
//     // cout << ans;
//     return ans;
// }

// int countCompleteSubarrays(vector<int> &nums)
// {
//     int c = 0, n = nums.size();
//     set<int> st;
//     for (int x : nums)
//     {
//         st.insert(x);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         set<int> temp;
//         for (int j = i; j < n; j++)
//         {
//             temp.insert(nums[j]);
//             if (temp == st)
//             {
//                 c++;
//             }
//         }
//     }
//     return c;
// }
// //////////////C\/\\////

// //////////////D\/\\////
// int c=0;
// void  dfs(int n, int m, int stepNum)
// {
//     // If Stepy
//     if (stepNum <= m && stepNum >= n)
//         // cout << stepNum << " ";
//         c++;

//     if (stepNum == 0 || stepNum > m)
//         return;
//     // fgwerdsfcac
//     int lastDigit = stepNum % 10;
//     //  dfadc/
//     int stepNumA = stepNum * 10 + (lastDigit - 1);
//     int stepNumB = stepNum * 10 + (lastDigit + 1);

//     if (lastDigit == 0)
//         dfs(n, m, stepNumB);

//     else if (lastDigit == 9)
//         dfs(n, m, stepNumA);
//     else
//     {
//         dfs(n, m, stepNumA);
//         dfs(n, m, stepNumB);
//     }
// }

// void displaySteppingNumbers(int n, int m)
// {

//     for (int i = 0; i <= 9; i++)
//         dfs(n, m, i);
// }

// \/\\\/\//\/\/\/\/\/

// int c = 0;
// void dfs(string n, string m, int stepNum)
// {
//     // If Stepy
//     if (n.size() == 1 && m.size() == 1)
//     {
//         if (stepNum <= stoi(m) && stepNum >= stoi(n))
//             // cout << stepNum << " ";
//             c++;

//         if (stepNum == 0 || stepNum > stoi(m))
//             return;
//     }
//     else if(n.size()==1){
//         if(stepNum >= stoi(n)){
//             c++;
//         }
//     }
//     // fgwerdsfcac
//     int lastDigit = stepNum % 10;
//     //  dfadc/
//     int stepNumA = stepNum * 10 + (lastDigit - 1);
//     int stepNumB = stepNum * 10 + (lastDigit + 1);

//     if (lastDigit == 0)
//         dfs(n, m, stepNumB);

//     else if (lastDigit == 9)
//         dfs(n, m, stepNumA);
//     else
//     {
//         dfs(n, m, stepNumA);
//         dfs(n, m, stepNumB);
//     }
// }

// void displaySteppingNumbers(string n, string m)
// {

//     for (int i = 0; i <= 9; i++)
//         dfs(n, m, i);
// }
// int countSteppingNumbers(string low, string high)
// {
//     displaySteppingNumbers(low, high);
//     return c;
// }
string trys(const string &a, const string &b)
{
    if (a.find(b) != string::npos)
    {
        return a;
    }
    for (int i = min( b.size(),a.size()); i >= 0; i--)
    {
        if (a.substr(a.size() - i) == b.substr(0, i))
        {
            return a + b.substr(i);
        }
    }
    return a + b;
}
string minimumString(string a, string b, string c)
{
    vector<string> v = {a, b, c};
    int n = v.size();
    string temp = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i != j && j != k && i != k)
                {
                    string st1 = trys(v[i], v[j]);
                    string st2 = trys(st1, v[k]);
                    if (temp == "" || (st2.size() < temp.size()) || (st2.size() == temp.size() && st2 <temp))
                    {
                        temp = st2;
                    }
                }
            }
        }
    }
    return temp;
}
int main()
{
    vector<char> vc = {};
    vector<int> v = {5, 5, 5, 5};
    vector<int> v2 = {91, 50};
    int n = 5;
    string s = "l";
    // cout << countCompleteSubarrays(v);
    cout << minimumString("ab", "ba","aaa");
    // cout << c;
    return 0;
}