#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int c =0;
void solve(int n,int i){
    if(i==n){
        c++;
        return;
    }
    solve(n,i+1);
    solve(n,i+1);
}

int main(){
    solve(4,0);
    cout<<c;
    
    return 0;
}