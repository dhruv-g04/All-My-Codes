#include <bits/stdc++.h>

using namespace std;

#define int long long
int n;

void replace_pi(char *a, int i)
{
	if (i >=n)
	{
		return;
	}
	// cout<<i<<endl;
	if (a[i] == 'p' and a[i + 1] == 'i')
	{
		// cout<<i<<" = i"<<endl;
		int j = n;
		while (j > i + 1)
		{	
			// cout<<j<<" = j"<<endl;
			a[j + 2] = a[j];
			j--;
		}
		// cout<<a<<endl;
		a[i] = '3';
		a[i + 1] = '.';
		a[i + 2] = '1';
		a[i + 3] = '4';
		n = n + 2;
		// cout<<a<<endl;
		replace_pi(a, i + 4);
		return;
	}
	replace_pi(a, i + 1);
	return;
}

signed main()
{
	int t = 1;
	// cin >> t;
	while (t--)
	{

		cin >> n;
		char a[n];
		// vector<int> v(n);
		int i;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		a[i] = '\0';
		// cout << a;
		replace_pi(a, 0);
		cout << a<<endl;
		// cout<<a[8];
	}
	return 0;
}
