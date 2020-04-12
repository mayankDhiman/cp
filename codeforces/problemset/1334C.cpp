#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
	ios_base::sync_with_stdio(0);	cin.tie(0);

	ll t;	cin >> t;
	while (t --) {
		ll n;	cin >> n;	vector <ll> a(n), b(n);
		for (ll i = 0; i < n; i ++) {
			ll x, y;	cin >> x >> y;
			a[i] = x;	b[i] = y;
		}
		vector <ll> c(n);	ll sc = 0;
		for (ll i = 1; i < n; i ++) {
			c[i] = max(0*1ll, a[i] - b[i - 1]);
			sc += c[i];
		}
		c[0] = max(0*1ll, a[0] - b[n - 1]);
		sc += c[0];

		//for (auto x : c)	cout << x << " ";	cout << "\n";
			
		//cout << sc << "\n";
		ll ret = LLONG_MAX;
		for (ll i = 0; i < n; i ++) {
			//cout << a[i] << " " << c[i] << "\n";
			ll score = a[i] + (sc - c[i]);
			ret = min(score, ret);
			//cout << score << " ";
		}	
		//cout << "\n";
		cout << ret << "\n";
	}

}
