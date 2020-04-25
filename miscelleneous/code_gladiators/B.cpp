#include <bits/stdc++.h>
using namespace std; 

#define ll long long 

ll n;
vector <ll> a, b;

bool ok(ll md) {
	ll x = a[]
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t; cin >> t;
	while (t --) {
		cin >> n;
		a.resize(n); b.resize(n);
		for (auto &x : a) cin >> x;
		for (auto &y : b) cin >> y;
		sort(a.begin(), a.end()); sort (b.begin(), b.end());
		ll li = 0, hi = n;
		while (lo < hi) {
			ll md = (hi - lo)/2;
			if (ok(md)){
				lo = md;
			}else{
				hi = md - 1;
			}
		}
		cout << lo << "\n";
	}

}
 
