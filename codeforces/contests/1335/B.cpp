#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t;	cin >> t;
	while (t--) {
		string ret;
		ll n, a, b;	cin >> n >> a >> b;
		for (ll i = 0; i < n; i ++) {
			ret += char('a' + i % b);
		}
		cout << ret << "\n";
	}
}
