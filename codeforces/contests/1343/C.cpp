#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
	ll t; 	cin >> t;
	while (t --) {
		ll n; 	cin >> n;
		vector <ll> a(n); 	for (ll i = 0; i < n; i ++) cin >> a[i];
		ll mx = a[0], ret = 0;
		for (ll i = 1; i < n; i ++) {
			if (a[i] * a[i - 1] < 0){
				ret += mx;
				mx = a[i];
			}
			mx = max(a[i], mx);
		}
		ret += mx;
		cout << ret << "\n";
	}
}
