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
	int n = 6;
	// cin>>n;
	int a[n] = {1, 2, 5, 10, 20, 50};
	int sum;
	cin >>sum;
	
	while (sum > 0) {
		int *ptr = upper_bound(a, a + n,sum);
		int idx=ptr-a;
		int temp=a[idx-1];
		sum=sum-temp;
		cout<<temp<<" ";
	}
	return 0;
}