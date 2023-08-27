/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main(int argc, char *a[])
{
    int n,m;
    cin>>n>>m;
    vector<int> N(n);
    vector<int> M(m);
    vector<int> ans(m);
    for (int i=0;i<n;i++){
        cin>>N[i];
    }
    for (int i=0;i<m;i++){
        cin>>M[i];
        int sum=0;
        for (int j=0;j<n;j++){
            sum+=abs(M[i]-N[j]);
        }
        ans[i]=(sum);
    }
    for (int x: ans){
        cout<<x<<" ";
    }
    
	//Write code here
}
