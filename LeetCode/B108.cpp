#include <bits/stdc++.h>
// #include <iostream>
using namespace std;
// \\\\\\\\\\\\\\\\\\\\A\\\\\\\\\\\\\\//
int alternatingSubarray(vector<int> &nums)
{
    int n = nums.size();
    bool flag = 1;
    int c = 1;
    int maxc = 0;
    for (int i = 1; i < n; i++)
    {
        // cout << nums[i] << ":v ";
        if (flag and (nums[i - 1] + 1 == nums[i]))
        {
            c++;
            flag = 0;
            // cout << ":ME ";
        }
        else if (!flag and (nums[i - 1] - 1 == nums[i]))
        {
            c++;
            flag = 1;
            // cout << ":HI ";
        }
        else
        {
            maxc = max(c, maxc);
            flag = 1;
            c = 1;
            // cout << ":Bye ";
            if (flag and (nums[i - 1] + 1 == nums[i]))
            {
                c++;
                flag = 0;
                // cout << ":ME2 ";
            }
        }
    }
    maxc = max(c, maxc);
    if(maxc==1){
        return -1;
    }
    return maxc;
}

////////////////////////B/////////////////////
vector<int> relocateMarbles(vector<int> &nums, vector<int> &moveF, vector<int> &moveT)
{
    map<int, int> m1;
    map<int, int> m2;
    int n = moveT.size();
    int m = nums.size();
    vector<int> ans;
    for (int i = 0; i < m; i++)
    {
        m2[nums[i]] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        m2[moveF[i]] = 0;
        m2[moveT[i]] = 1;
    }
    for (auto x : m2)
    {
        if (x.second != 0)
            ans.push_back(x.first);
    }
    return ans;
}
////////////////////////C////////////////////

int minimumBeautifulSubstrings(string s)
{
    int n = s.size();
    int c = 0;
    // int j = 0;
    int ans = 0;
    if (s[n - 1] == '0')
    {
        return -1;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        // cout << s[i] << ":s ";
        if (c == 0 and s[i] == '1' and i - 1 >= 0 and s[i - 1] == '1')
        {
            // cout << ":ME ";
            ans++;
            c = 0;
            // j = 0;
            continue;
        }

        if (s[i] == '1')
            c = (c << 1) + 1;
        else
            c = (c << 1) + 0;
        // j++;
        // cout << c << ":c ";
        if (c % 5 == 0)
        {
            ans++;
            c = 0;
            // j = 0;
        }
        // else{

        // }
    }
    while (c)
    {
        int bit = c & 1;
        if(bit==1){
            ans++;
        }
        else{
            return -1;
        }
        c = c >> 1;
    }
    if (ans == 0)
    {
        return -1;
    }
    return ans;
}

int main()
{
    vector<int> v = {1, 1, 3, 3};
    vector<int> f = {2, 3, 4, 3, 4};
    vector<int> t = {2, 3, 4, 3, 4};
    // vector<char> vc(1000000000);
    int n = 5;
    string s = "0";
    // cout << relocateMarbles(v,f,t);
    // cout<<binary_function(2);
    cout << minimumBeautifulSubstrings(s);

    return 0;
}