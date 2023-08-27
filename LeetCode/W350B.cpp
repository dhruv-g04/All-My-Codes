#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findValueOfPartition(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int dif = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        dif = min(abs(nums[i - 1] - nums[i]), dif);
    }
    return dif;
}

int main()
{
    // cout<<;

    return 0;
}