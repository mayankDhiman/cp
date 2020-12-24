#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, cache[int(1e5)][3];
vector <ll> a, b, c;


ll dp(ll i, ll p)
{
	if (i == n)
		return 0;
	if (p != -1){
		if (cache[i][p] != -1)	return cache[i][p];
	}
	ll ret = -2e9;
	if (p == -1) ret = max({b[i] + dp(i + 1, 1), c[i] + dp(i + 1, 2), ret, a[i] + dp(i + 1, 0)});	
	if (p == 0)	ret = max({b[i] + dp(i + 1, 1), c[i] + dp(i + 1, 2), ret});
	if (p == 1)	ret = max({a[i] + dp(i + 1, 0), c[i] + dp(i + 1, 2), ret});
	if (p == 2)	ret = max({b[i] + dp(i + 1, 1), a[i] + dp(i + 1, 0), ret});		
	return cache[i][p] = ret;
}

int main()
{	
	ll nn;	cin >> nn;
	vector <ll> aa(nn), bb(nn), cc(nn);	
	for (ll i = 0; i < nn; i ++){
		cin >> aa[i] >> bb[i] >> cc[i];
	}	
	memset(cache, -1, sizeof cache);
	n = nn;	a = aa; b = bb; c = cc;
	cout << dp(0, -1) << "\n";
}