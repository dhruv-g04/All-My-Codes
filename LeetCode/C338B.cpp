#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int semiOrderedPermutation(vector<int> &nums)
{
    int ans;
    int n = nums.size();
    int fi = 1;
    int la = n;
    int c = 1;
    int lai, fai;
    for (int i : nums)
    {
        if (i == 1)
        {
            fai = c;
        }
        if (i == n)
        {
            lai = c;
        }
        c++;
    }
    ans = (fai - 1) + (n - lai);
    if (lai < fai)
    {
        ans = ans - 1;
    }
    return ans;
    // if (fi == nums.size() and la==1)
    // {
    //     return 1;
    // }
    // if(fi==1 and la==nums.size()) return 0;
    // if(la==nums.size()) return 1;
    // if(fi==1) return 1;
    // return 2;
}

int main()
{
    // cout<<;

    return 0;
}