using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll n, m;	cin >> n >> m;
	ll a[n];	for (ll i = 0; i < n; i++)	cin >> a[i];
	set<pair<ll, ll>> ps;	ll c[n];
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
		ps.insert(make_pair(c[i], i));
	}
	while(m --)
	{
		ll t, q, res = 0;	cin >> t >> q;	t -= 1;
		ll mn = min(q, a[t]);
		res += mn * c[t];
		q -= mn;	a[t] -= mn;
		while (q > 0 && ps.size() > 0)
		{
			ll u = ps.begin()->second;
			ll mn = min(q, a[u]);
			q -= mn;	a[u] -= mn;
			res += mn * c[u];
			if (!a[u])
				ps.erase(ps.begin());
		}
		if(q)	cout << "0\n";
		else	cout << res << endl;
	}	
}