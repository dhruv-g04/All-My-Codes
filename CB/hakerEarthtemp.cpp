#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if (a==0){
        return b;
    }
    return gcd(b%a,a);
}

int main()
{
    int n1, n2;

    
    cin >> n1 >> n2;
    if (n1==1 or n2==1){
        cout<<1<<endl;
        return 0;
    }

    int n= gcd(n1,n2);
    int ans=0;
    for (int i=1;i<=sqrt(n);i++){
        if (n%i==0){
            if (n/i==i){
                ans+=1;
            }
            else{
                ans+=2;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
    
}