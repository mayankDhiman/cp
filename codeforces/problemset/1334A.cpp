#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t;	cin >> t;
	while (t--) {
	
		ll n;	cin >> n;	vector < pair <ll, ll> > a(n);
		for (ll i = 0; i < n; i ++) {
			ll x, y;	cin >> x >> y;
			a[i] = {x, y};
		}
		bool ok = 1;
		for (ll i = 0; i < n; i ++) {
			if (!i) {
				if (a[i].second > a[i].first){
					ok = 0;	break;
				}
				continue;
			}

			if (a[i].first < a[i - 1].first){
				ok = 0;	break;
			}
			if (a[i].second < a[i - 1].second){
				ok = 0; break;
			}
			ll np = a[i].first - a[i - 1].first;
			ll nc = a[i].second - a[i - 1].second;
			if (nc > np) {
				ok = 0;	break;
			}
		}
		if (ok){
			cout << "yes\n";
		}	

		else	cout << "no\n";

	}
}
