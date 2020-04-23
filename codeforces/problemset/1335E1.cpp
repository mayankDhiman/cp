#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
	ll t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		vector <ll> a(n); for (auto &x : a) cin >> x;
		vector < vector <ll> > cn(26, vector <ll> (n + 1, 0));
		for (ll i = 0; i < n; i ++) {
			for (ll j = 0; j < 26; j ++){
				cn[j][i + 1] = cn[j][i];
			}
			cn[a[i] - 1][i + 1] += 1;
		}

		ll res = 0;
		for (ll i = 0; i < 26; i ++){
			res = max(res, cn[i][n]);
		}
		for (ll i = 0; i < n; i ++) {
			for (ll j = i + 1; j < n; j ++){
				ll sd = 0; 
				for (ll k = 0; k < 26; k ++){
					ll sc = min(cn[k][i + 1], cn[k][n] - cn[k][j]);
					sd = max(sc, sd);
				}
				ll md = 0; // between i + 1 & j - 1
				for (ll k = 0; k < 26; k ++){
					ll sc = cn[k][j] - cn[k][i + 1];
					md = max(sc, md);
				}
				res = max(res, md + 2*sd);
			}
		}
		cout << res << "\n";
	}
		
}
