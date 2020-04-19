#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t;	cin >> t;
	for (ll T = 1; T <= t; T ++) {
		ll n, d;	cin >> n >> d;
		vector <ll> a(n);	for (ll i = 0; i < n; i ++) cin >> a[i];
		for (ll i = n - 1; i >= 0; i --) {
			d -= (d % a[i]); 	
			//cout << d << "\n";
		}
		cout << "Case #" << T << ": " << d << "\n";
	}	
}

