#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> findSum(vector<int> &a, vector<int> &b)
{
    // code here
    int i1 = a.size() - 1;
    int i2 = b.size() - 1;
    vector<int> ans;
    int carry = 0;
    while (i1 != -1 or i2 != -1 or carry != 0)
    {
        int val = 0;
        if (i1 != -1)
        {
            val += a[i1--];
        }
        if (i2 != -1)
        {
            val += b[i2--];
        }
        val += carry;
        ans.push_back(val % 10);
        carry = val / 10;
    }
    return ans;
}
int main()
{
    vector<int> a={5, 6, 3};
    vector<int> b={8, 4, 2};
    for (auto x: findSum(a, b)){
        cout<<x<<" ";
    }
    // cout<<;
    return 0;
}