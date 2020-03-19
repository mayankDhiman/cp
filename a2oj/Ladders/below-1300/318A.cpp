using namespace std;

#define ll long long

#include <bits/stdc++.h>

ll solve (ll n, ll k)
{
	if (n % 2 == 0)
	{
		if (k <= n/2)
		{
			return (2*k - 1);
		}
		else
		{
			k = k - (n/2);
			return 2 * k;
		}
	}
	else
	{
		if (k <= (n + 1)/2)
		{
			return (2*k - 1);
		}
		else
		{	
			k -= (n + 1)/2;
			return 2 * k;
		}

	}
}

int main()
{
	ll n, k; cin >> n >> k;
	ll res = solve(n, k);
	cout << res << endl;
}