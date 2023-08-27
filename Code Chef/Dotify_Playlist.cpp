#include <bits/stdc++.h>
#include <climits> //INT_MAX and INT_MIN
#include <cmath>   //
#include <map>     //
#include <string>
#include <array>
#include <cstring>
#include <vector>
#include <set>
#include <tuple>
#include <cstdio>
#include <complex>

using namespace std;

#define int long long
#define pb push_back
#define input_vector(v) \
    for (auto &i : v)   \
        cin >> i;
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
#define for_dec(i, a, b) for (ll i = a - 1; i >= b; i--)
#define PrintArray(a) \
    for (auto i : a)  \
        cout << i;

bool compare_a(int a, int b)
{
    return a < b;
}
bool compare(int a, int b)
{
    return a > b;
}

void solve()
{
    int n,k,l;
	    cin >> n>>k>>l;
	    int c=0;
	    vector<int> song;
	   // vector<int> v(n);
    //    if (k>n){

    //    }
    if (k>n){
            cout<<-1;
            cout<<endl;
            return;
        }
	    for (int i = 0; i < n; i++) {
	        int tempm;
	        int templ;
	        cin>>tempm;
	        cin >> templ;
            if(templ==l){
                song.push_back(tempm);
            }
	        
	    }
        
        if (k>song.size()){
            cout<<-1;
            cout<<endl;
            return;
        }
        sort(song.begin(),song.end(),compare);
        for(int i=0;i<k;i++){
            c+=song[i];
        }
        cout<<c;
        cout<<endl;
    
    return;
}

signed main()
{
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
