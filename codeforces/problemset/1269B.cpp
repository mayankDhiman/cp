#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n, m;	cin >> n >> m;	
	vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];
	vector <ll> b(n);	for (ll i = 0; i < n; i ++)	cin >> b[i];

	vector <ll> aa = a, bb = b;	sort(aa.begin(), aa.end());	sort(bb.begin(), bb.end());
	if (aa == bb){
		cout << "0\n";
		return 0;
	}
	ll res = 2e9;
	for (ll i = 0; i < n; i ++){
		for (ll j = 0; j < n+; j ++){
			ll x = a[i], y = b[j];
			// cout << x << " " << y << "\n";
			ll step = m*(x/m + 1) - x + y;
			ll step_ = step - m;
			if (step_ > 0){
				step = step_;
			}
			res = min(res, step);
		}
	}
	cout << res << "\n";
	// ll x = a[0], y = b[0];

}
