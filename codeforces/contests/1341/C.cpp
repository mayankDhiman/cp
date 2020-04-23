#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		vector <ll> a(n), pos(n + 1); 
		for (ll i = 0; i < n; i ++) {
			cin >> a[i];
			pos[a[i]] = i + 1;
		}
		vector <ll> cn(n + 1, 1); ll mx = 1;
		multiset <ll, greater <ll> > ms;
		for (ll i = 1; i <= n; i ++) ms.emplace(1);

		bool ok = 1;
		for (ll i = 1; i <= n; i ++){
			ll p = pos[i], mx = *ms.begin();
			if (cn[p] < mx) ok = 0;	
			if (p != n){
				if (cn[p + 1] != 0)
					cn[p + 1] += cn[p];
			}	
			ms.erase(ms.find(cn[p]));
			if (p != n){
				if (cn[p + 1] != 0)
					ms.insert(cn[p + 1]);
			}
			cn[p] = 0;
		}
		if (ok) cout << "Yes\n";
		else cout << "No\n";
	}
}
