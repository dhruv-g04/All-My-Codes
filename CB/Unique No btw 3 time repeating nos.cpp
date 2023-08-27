#include <iostream>
#include <cstring>
#include <sstream>
#include <climits> //INT_MAX and INT_MIN
#include <cmath>   //
#include <map>	   //
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
#define input_vector(v) \
	for (auto &i : v)   \
		cin >> i;
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
#define for_dec(i, a, b) for (ll i = a - 1; i >= b; i--)
#define PrintArray(a) \
	for (auto i : a)  \
		cout << i << " ";
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
	int b[31] = {0};
	int a[] = {1, 1, 1, 2, 2, 2, 5, 5, 5, 20};
	int n = sizeof(a) / sizeof(a[0]);
	for_inc(i, 0, n)
	{
		int k = 0;
		int mask = 1;
		for_inc(j, 0, 32)
		{
			if ((mask & a[i]) == 0)
			{
				b[k] = b[k] + 0;
			}
			else
			{
				b[k] = b[k] + 1;
			}
			mask = mask << 1;
			k++;
		}
	}
	int l = 0;
	int ans = 0;
	for (auto u : b)
	{

		ans += ((u % 3) * (1 << l));
		// cout<<ans<<" ";
		l++;
	}
	cout << ans;
	return 0;
}
