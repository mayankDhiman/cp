#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, h, l, r;
vector <ll> a;
vector < vector <ll> > cache(2001, vector <ll> (2001, -1));

ll dp(ll i, ll now)
{
	if (i >= n){
		return 0;
	}

	if (cache[i][now] != -1){
		return cache[i][now];
	}

	ll st1 = (now + a[i])%h, r1;
	r1 = ( (st1 >= l) && (st1 <= r) ) + dp(i + 1, (now + a[i]) % h);


	ll st2 = (now + a[i] - 1)%h, r2; 
	r2 = ( (st2 >= l) && (st2 <= r) ) + dp(i + 1, (now + a[i] - 1) % h);

	return cache[i][now] = max(r1, r2);
}

int main()
{
	ll _n, _h, _l, _r;	cin >> _n >> _h >> _l >> _r;	
	vector <ll> _a(_n);
	for (ll i = 0; i < _n; i ++)	cin >> _a[i];
	a = _a;	n = _n;	h = _h;	l = _l;	r = _r;
	cout << dp(0, 0) << "\n";
}