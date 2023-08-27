

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isFascinating(int n)
{
    // int n1=n;
    int n2=n*2;
    int n3=n*3;
    string s="";
    s+=to_string(n)+to_string(n2)+to_string(n3);
    // cout<<s;
    vector<int> v(10,0);
    for(auto x:s){
        v[x-48]++;
    }
    if(v[0]!=0){
        return false;
    }
    for(int x:v){
        if(x>1){
            return false;
        }
    }
    return true;

}
int main()
{
    // cout<<;
cout<<isFascinating(100);
    return 0;
}