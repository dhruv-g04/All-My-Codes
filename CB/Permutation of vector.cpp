#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(vector<int> &a,int n, int i,vector<vector<int>> &ans){
    if (i>=n){
        ans.push_back(a);
        return;
    }
    for (int j=i;j<n;j++){
        // cout<<i<<" =i j= "<<j<<endl;
        swap(a[i],a[j]);
        solve(a,n,i+1,ans);
        swap(a[i],a[j]);
    }
    return;
}

int main(){
    vector<vector<int>> ans;
    vector<int> a{1,2,3,4};
    solve(a,4,0,ans);
    for (auto x:ans){
        for (auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
