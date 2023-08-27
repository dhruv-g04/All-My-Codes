#include<iostream>
#include <cstring>
#include <sstream>
#include <climits> //INT_MAX and INT_MIN
#include <cmath>   //
#include <map>     //
#include <string>
#include <array>
#include <vector>
#include <set>
#include <tuple>
#include <cstdio>
#include <complex>
#include <algorithm> //*min_element

using namespace std;

#define ll long long
#define pb push_back
#define input_vector(v) for (auto &i : v) cin >> i;
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
#define for_dec(i, a, b) for (ll i = a - 1; i >= b; i--)
#define PrintArray(a) for (auto i : a) cout << i<<" ";
// void PrintArray(int a[],int n){
//     for (int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout <<endl;
// }

bool compare_a(int a, int b)
{
	return a < b;
}
bool compare_d(int a, int b)
{
	return a > b;
}


int main()
{	
	// int b[10];
	// int c[10];
	int a[] = {1,1,3,5,5,7};
	int xorofall = 0;
	for (auto x : a) {
		xorofall = (xorofall ^ x);
	}
	// cout<<xorofall <<endl;

	int mask = 1;
	int i=0,j=0;
	while ((mask & xorofall) == 0) {
		mask = (mask << 1);
	}
	// cout<<mask<<endl;
	for (auto x : a) {
		if ((x&mask)==0){
			i=(i^x);
			// cout<<x<<" 0"<<endl;
		}
		// else{
		// 	j=(j^x);
		// 	// cout<<x<<" 1"<<endl;
		// }
	}
	j=(xorofall^i);
	cout<<i<<" "<<j;
	return 0;
}