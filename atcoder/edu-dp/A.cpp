#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, cache[int(1e5)];
vector <ll> h;

ll dp(ll i)
{
	if (i == n - 1)
		return 0;
	if (i >= n)	return 2e9;
	if (cache[i] != -1)	return cache[i];
	return cache[i] = min(abs(h[i] - h[i + 1]) + dp(i + 1), abs(h[i] - h[i + 2]) + dp(i + 2));
}

int main()
{	
	ll _n;	cin >> _n;	vector <ll> _h(_n);	for (ll i = 0; i < _n; i ++)	cin >> _h[i];
	n = _n;	h = _h;	memset(cache, -1, sizeof(cache));
	cout << dp(0) << "\n";
}