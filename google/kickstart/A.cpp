#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t;	cin >> t;
	for (ll T = 1; T <= t; T ++) {
		ll n;	cin >> n;
		vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];
		ll ret = 0;
		for (ll i = 1; i < n - 1; i ++) {
			if (a[i] > a[i - 1] && a[i] > a[i + 1])	ret += 1;
		}
		cout << "Case #" << T << ": " << ret << "\n";
	}	
}
