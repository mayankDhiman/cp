#include <bits/stdc++.h>
using namespace std; 

#define ll long long 

int main() {
	ll t; cin >> t;
	while (t--) {
		ll n, k; cin >> n >> k;
		map <ll, multiset <ll> > mp;
		vector <ll> a(n);
		for (ll i = 0; i < n; i ++){
			cin >> a[i];
			mp[i % k].insert(a[i]);
		}
		vector <ll> as(n);
		for (ll i = 0; i < n; i ++){
			as[i] = *mp[i%k].begin();
			mp[i%k].erase(mp[i%k].begin());
		}
		sort(a.begin(), a.end());
		if (a == as) cout << "yes\n";
		else cout << "no\n";
	}
}
