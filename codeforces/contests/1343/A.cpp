#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
	ll t; 	cin >> t;
	while (t --) {
		ll n, k = 2; 	cin >> n;
		while (1) {
			ll s = (1 << k) - 1;
			if (n % s == 0){
				cout << n / s << "\n";
				break;
			}
			k += 1;
		}
	}
}
