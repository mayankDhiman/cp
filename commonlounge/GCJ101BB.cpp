using namespace std;
#include <bits/stdc++.h>

#define ll long long

int main()
{
	int t;	cin >> t;
	for (int T = 1; T <= t; T ++)
	{

		ll n, k, b, t;	cin >> n >> k >> b >> t;
		ll x[n], v[n];
		for (ll i = 0; i < n; i ++)	cin >> x[i];
		for (ll i = 0; i < n; i ++)	cin >> v[i];

		bool f[n];
		for (ll i = 0; i < n; i ++)
		{
			if (x[i] + v[i] * t >= b)
			{
				f[i] = true;
			}
			else
				f[i] = false;
		}

		cout << "Case #" << T << ": ";

		if (accumulate(f, f + n, 0) < k){
			cout << "IMPOSSIBLE\n";
			continue;
		}

		ll res = 0, cntFin = 0, cntNon = 0;
		for (ll i = n - 1; i >= 0; i --)
		{
			if (!f[i]){
				cntNon += 1;
			}
			else{
				cntFin += 1;
				res += cntNon;
			}
			if (cntFin == k){
				break;
			}
		}

		cout << res << "\n";	
	}
}