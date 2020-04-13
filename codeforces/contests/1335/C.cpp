#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t;	cin >> t;
	while (t --) {
		ll n;	cin >> n;
		vector <ll> a(n);	
		set <ll> uq;	map <ll, ll> cn;
		for (ll i = 0; i < n; i ++) {
			ll x;	cin >> x;
			cn[x] += 1;
			uq.insert(x);
		}
		ll ret = 0;
		for (auto c : cn) {
			ll r = c.second;
			uq.erase(c.first);
			ret = max(ret, min(r, (long long)uq.size()  ) );

			uq.insert(c.first);
			c.second -= 1;
			r = c.second;
			ret = max(ret, min(r, (long long) uq.size()));
		}
		cout << ret << "\n";
	}
}

