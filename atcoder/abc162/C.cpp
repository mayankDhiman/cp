#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n, ret = 0;	cin >> n;
	for (ll i = 1; i <= n; i ++) {
		for (ll j = 1; j <= n; j ++) {
			for (ll k = 1; k <= n; k ++) {
				ret += __gcd(i, __gcd(j, k));
			}
		}
	}
	cout << ret << "\n";
}
