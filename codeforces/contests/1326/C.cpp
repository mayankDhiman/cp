#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n, k;	cin >> n >> k;	ll pos[200001];
	vector <ll> b;
	for (ll i = 0; i < n; i ++){
		ll x;	cin >> x;
		pos[x] = i;
		b.push_back(x);
	}
	sort(b.begin(), b.end(), greater <ll> ());

	ll r1 = 0;
	vector <ll> a;
	for (ll i = 0; i < k; i ++){
		r1 += b[i];
		a.push_back(pos[b[i]]);
	}
	sort(a.begin(), a.end());
	ll r2 = 1, mod = 998244353;
	for (ll i = 1; i < a.size(); i ++){
		r2 = (r2%mod * (a[i] - a[i - 1])%mod) % mod;
	}
	r2 = r2 %mod;
	cout << r1 << " " << r2 << "\n";
}