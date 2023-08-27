#include <bits/stdc++.h>
#include <climits>//INT_MAX and INT_MIN
#include <cmath> //
#include <map>//
#include <string>
#include <array>
#include <cstring>
#include <vector>
#include <set>
#include <tuple>
#include <cstdio>
#include <complex>
#include <algorithm> //find, bool binary_search, *min_element, next_permutation(a,a+n)
using namespace std;
#include <bitset>


#define int long long
#define pb push_back
#define input_vector(v) for (auto &i: v) cin >> i;
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
#define for_dec(i, a, b) for (ll i = a-1; i >= b; i--)
#define PrintArray(a) for (auto i:a) cout<<i;
// void PrintArray(int a[],int n){
//     for (int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout <<endl;
// }
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
bool compare_a(int a,int b){
    return a<b;
}
bool compare_d(int a,int b){
    return a>b;
}
int blen(int n) {
    // int n = 11;
    bitset<64> binary(n);  // Represent n in binary using 32 bits
    int len = binary.size();
    while (len > 1 && binary[len-1] == 0) {
        len--;  // Ignore leading zeros
    }
    // cout << "Binary representation of " << n << ": " << binary << endl;
    // cout << "Length of binary representation: " << len << endl;
    return len;
}

signed solve(int *a,int n)
{	
	int b[64]={0};
	for(int i=0;i<n;i++){
		int k=0;
		int mask=1;
		for(int j=0;j<64;j++){
			if ((mask&a[i])==0){

			b[k]=b[k]+0;
			}
			else{
				b[k]=b[k]+1;
			}
			mask=mask<<1;
			k++;
		}
	}
	int l=0;
	int ans=0;
	for (auto u :b){
        if (0<u and u<n){
            ans+=1*(1<<l);
        }
		// ans+=((u%3)*(1<<l));
		// cout<<ans<<" ";
		l++;
	}
	// cout<<ans;
	return ans;
}

signed main() { 
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int m=INT_MIN;
	    int a[n];
	    for (int i = 0; i < n; i++) {
	        cin >> a[i];
	        // m=max(m,v[i]);
	    }
        int l=blen(m);
	    cout<<solve(a,n)<<endl;
	}
	return 0;
}
