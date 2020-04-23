#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t; cin >> t;
	while (t--) {
		ll n, k; cin >> n >> k;
		vector <ll> a(n);
		for (ll i = 0; i < n; i ++) cin >> a[i];
		vector <ll> pk(n, 0);
		for (ll i = 1; i < n - 1; i ++){
			if (a[i] > a[i - 1] && a[i] > a[i + 1]) pk[i] = 1;
		}
		vector <ll> ps(n + 1, 0);
		for (ll i = 1; i < n + 1; i ++) ps[i] = ps[i - 1] + pk[i - 1];
		ll mp = 0, l = 0;
		for (ll i = 0; i <= n - k; i ++){
			ll st = i + 1, en = i + k - 1 - 1;
			ll np = ps[en + 1] - ps[st];
			if (np > mp){
				mp = np;
				l = i;
			}
		}
		cout << mp + 1 << " " << l + 1 << "\n"; 
	}
}
