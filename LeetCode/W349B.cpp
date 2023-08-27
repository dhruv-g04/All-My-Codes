#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long long minCost(vector<int> &nums, int x)
{
    long long n = nums.size();
    vector<int> v(nums);
    long long c = 0;
    long long i = 0;
    int loop = 0;
    for (int i = 0; i < n; i++)
    {
        long long tryloop;
        for (int j = 0; j < n; j++)
        {
            long long money;
            int ind;
            if (i - j < 0)
            {
                ind = n - j;
            }
            else
                ind = i - j;

            if (v[i] > nums[ind] + (j * x))
            {
                v[i] = nums[ind];
                loop = max(loop, j);
            }
        }
    }
    long long sum = 0;
    for (auto x : v)
    {
        // cout << x << " ";
        sum += x;
    }
    // cout<<endl;
    // cout<<loop<<endl;
    sum += x * loop;
    return sum;
}

int main()
{
    // cout<<;
    vector<int> v = {1, 2, 3};
    cout << minCost(v, 5);
    return 0;
}