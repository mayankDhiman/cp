#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, p, q;	vector <ll> a;
// p --> pipe
// q --> pillar
ll dp(ll i, ll c)
{
	if (i == n){
		return c*q;
	}
	ll ret = +2e9;
	if (a[i]){
		ret = min(((c==1) + 1)*p + 2*q + dp(i + 1, 2), ret);
	}
	else{
		if (i)
			ret = min({dp(i + 1, 2) + ((c==1) + 1)*p + q*2, ret, dp(i + 1, 1) + ((c==2) + 1)*p +  (c)*q});
		else
			ret = min({dp(i + 1, 2) + 2*q + p, ret, dp(i + 1, 1) + 1*q + p});
	}
	return ret;
}

int main()
{	
	cin >> n >> p >> q;	a.resize(n);	
	for (ll i = 0; i < n; i ++){
		char x;	cin >> x;
		if (x == '1')	a[i] = 1;
		else	a[i] = 0;
	}	
	cout << dp(0, 0);
}

// 010

// 3 + 