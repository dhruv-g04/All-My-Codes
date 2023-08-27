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

bool isodd(int n)
{
	int ans = (n & 1) == 1 ? 1 : 0;
	return ans;
}
bool ithbit(int n, int i)
{
	int mask = (1 << i);
	int ans = (n & mask) == 0 ? 0 : 1;
	return ans;
}
void setith(int &ptr, int i)
{
	int mask = (1 << i);
	ptr = (ptr | mask);
}
int countsetbit(int n)
{
	int cnt = 0, i = 0;
	while (n != 0)
	{
		cnt += (n & 1);
		n = n >> 1;
		// i++;
	}
	return cnt;
}
void clearitojbit(int &n, int i, int j)
{

	int m1, m2;
	m1 = (~0);
	m1 = (m1 << j);
	m2 = pow(2, i) - 1;
	int mask = m1 | m2;
	n = (n & mask);
}
void updatebits(int &n, int m, int i, int j)
{
	clearitojbit(n, i - 1, j);
	m = (m << i - 1);
	n = (n | m);
}

void dectobin_efficient(int n)
{
	bool onefound = false;
	int mask = (1 << 30);
	while (mask > 0)
	{
		if ((n & mask) == 0 and onefound == false)
		{
			mask = mask >> 1;
		}
		else
		{
			onefound = true;
			if ((n & mask) == 0)
			{
				cout << 0;
			}
			else
			{
				cout << 1;
			}
			mask = mask >> 1;
		}
	}
}
int main()
{
	// int mask=(~0);
	// mask=(mask<<4);
	// cout<<mask;
	int n, m, i, j, l;
	// cin>>n>>m>>i>>j;
	cin >> n;
	// l=sizeof(n);
	// cout<<countsetbit(n);
	// clearitojbit(n,i,j);
	// updatebits(n,m,i,j);
	dectobin_efficient(n);
	// cout << n;
	return 0;
}