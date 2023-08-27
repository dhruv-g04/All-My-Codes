#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int solve(int itemwt[], int price[], int capacity, int n)
{
    if (n == -1 || capacity == 0)
    {
        return 0;
    }
    int inc = INT32_MIN, exc = INT32_MIN;
    if (capacity >= itemwt[n])
    {

        inc = price[n] + solve(itemwt, price, capacity - itemwt[n], n - 1);
    }

    exc = solve(itemwt, price, capacity, n - 1);
    return max(inc, exc);
}






int solve(string s, vector<string> &d, int i,int j)
{
    int lens=s.size();
    if (i==lens){
        return 0;
    }
    if (j==lens){
        return 0;
    }
    int inc1 = INT32_MIN, inc2 = INT32_MIN, exc = INT32_MIN;
    if (count(d.begin(), d.end(), s.substr(j, j - i))){
        inc1=j-i+solve(s,d,i+1,j);
        inc2=j-i+solve(s,d,i,j+1);
    }
    return max(max(inc1,inc2), exc);
}

int main(){
    // cout<<;
    string s = "leetscodesa";
    vector<string> d = {"leet", "code", "leetcode"};
    // cout << s.substr(2, 3);
    vector<int> nums = { 9,9,9,9,9,9,9,9,9,9,9,9,9};
    cout << solve(s, d,0,0);
    
    return 0;
}