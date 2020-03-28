#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, k, cache[2][int(1e5)];
vector < pair <ll, ll> > a;

ll dp(ll i, ll c)
{
	if (i >= n)	return 0;
	if (cache[!(i%2)][c] != -1)	return cache[!(i%2)][c];

	ll ret = -2e9;
	if (c + a[i].first > k){
		ret = max(ret, dp(i + 1, c));
	}
	else{
		ret = max({ret, dp(i + 1, c), a[i].second + dp(i + 1, c + a[i].first)});
	}
	return cache[!(i%2)][c] = ret;
}
int main()
{	
	memset(cache, -1, sizeof cache);
	cin >> n >> k;	a.resize(n);
	for (ll i = 0; i < n; i ++){
		ll x, y;	cin >> x >> y;
		a[i] = {x, y};
	}
	cout << dp(0, 0) << "\n";
}