using namespace std;
#define ll long long

#include <bits/stdc++.h>

int main()
{
	ll n, m; cin >> n >> m;
	ll a[m]; for (ll i = 0; i < m; i ++)	cin >> a[i];
	ll res = a[0] - 1;
	for (ll i = 1; i < m; i ++)
	{
		if (a[i] >= a[i - 1])
			res += a[i] - a[i - 1];
		else
			res += (n - a[i - 1]) + (a[i]);
	}
	cout << res << endl;
}