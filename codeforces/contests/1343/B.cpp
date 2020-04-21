#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
	ll t; 	cin >> t;
	while (t --) {
		ll n; 	cin >> n;
		if ( (n/2) % 2 == 1) {
			cout << "NO\n";
			continue;
		}
		vector <ll> ret;
		n /= 2;
		for (ll i = 1; i <= n; i ++){
			ret.emplace_back(2*i);
		}
		for (ll i = 0; i < n; i ++) {
			if (i < n / 2){
				ret.emplace_back(ret[i] - 1);
			}
			else {
				ret.emplace_back(ret[i] + 1);
			}
		}
		cout << "YES\n";
		for (auto i : ret) cout << i << " "; 	cout << "\n";
		
	}
}
