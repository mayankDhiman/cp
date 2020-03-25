#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n, q;	cin >> n >> q;
	ll a[n], aa[n + 1];	for (ll i = 0; i < n; i ++)	cin >> a[i];
	for (ll i = 0; i < n + 1; i ++)	aa[i] = 0;
	while (q--)
	{
		ll l, r;	cin >> l >> r;
		aa[l - 1] += 1;
		aa[r] -= 1;
	}
	for (ll i = 1; i < n + 1; i ++){
		aa[i] += aa[i - 1];
	}
	sort (aa, aa + n, [](const ll a, const ll b){
		return (a > b);
	});
	sort (a, a + n, greater<ll> ());
	ll res = 0; 
	for (int i = 0; i < n; i ++){
		res += a[i] * aa[i];
	}
	cout << res << "\n";
}	
