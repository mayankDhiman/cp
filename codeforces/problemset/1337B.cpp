#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t;	cin >> t;
	while (t --) {
		ll x, n, m;	cin >> x >> n >> m;

		while (x > 20 && n > 0) {
			x = (x/2) + 10;
			n -= 1;
		}

		while (m > 0) {
			x -= 10;
			m -= 1;
		}

		if (x <= 0)	cout << "YES\n";
		else	cout << "NO\n";
	}
}
