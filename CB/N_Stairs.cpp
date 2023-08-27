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

#define ll long long
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
bool compare_d(int a, int b)
{
	return a > b;
}

int n_Stairs(int n,int k){
	if (n==0){
		return 1;
	}
	if (n<0){
		return 0;
	}
	int sum=0;
	for_inc(i,0,k){
		sum+= n_Stairs(n-k+i,k);
	}
	return sum;
	
}

signed main()
{
	int t=1;
	// cin >> t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<n_Stairs(n,k);
	}
	return 0;
}
