#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, k, cache[int(1e5)];
vector <ll> h;

ll dp(ll ix)
{
	if (ix == n - 1)
		return 0;
	if (ix >= n)	return 2e9;
	if (cache[ix] != -1)	return cache[ix];
	ll ret = 2e9;
	for (ll i = 1; i <= k; i ++){
		ret = min(abs(h[ix] - h[ix + i]) + dp(ix + i), ret);
	}
	return cache[ix] = ret;
}

int main()
{	
	ll _n, _k;	cin >> _n >> _k;	vector <ll> _h(_n);	for (ll i = 0; i < _n; i ++)	cin >> _h[i];
	n = _n;	h = _h;	k = _k;	memset(cache, -1, sizeof(cache));
	cout << dp(0) << "\n";
}