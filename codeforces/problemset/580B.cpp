#define ll long long

#include <bits/stdc++.h>
using namespace std;

bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
	return (a.second > b.second);
}

int main()
{
	ll n, d;	cin >> n >> d;
	vector <pair<ll, ll>> a(n);

	for (ll i = 0; i < n; i++)
	{
		ll t1, t2;	cin >> t1 >> t2;
		a[i] = make_pair(t1, t2);
	}
	sort(a.begin(), a.end());

	ll prS[n + 1];
	prS[0] = 0;
	for (ll i = 1; i < n + 1; i ++)
		prS[i] = prS[i - 1] + a[i - 1].second;


	ll res = 0, j = 0, i = 0;
	for (; i < n; i += 1)
	{
		ll mx = a[i].first + d;
		while(j < n && a[j].first < mx){
			j += 1;
		}
		res = max(res, prS[j] - prS[i]);
	}

	cout << res << "\n";
}