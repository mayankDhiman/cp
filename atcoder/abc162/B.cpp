#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n, ret = 0;	cin >> n;
	for (ll x = 1; x <= n; x ++) {
		if ( (x % 3 == 0) || (x % 5 == 0)) {

		}
		else {
			ret += x;
		}
	}
	cout << ret << "\n";
}
