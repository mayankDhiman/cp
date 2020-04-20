#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
	ll t; 	cin >> t;
	while (t --) {
		ll n, e1 = 0, o1 = 0; 	 cin >> n;
		while (n --) {
			ll x; 	cin >> x;
			if (x & 1) 	o1 += 1; 	else 	e1 += 1;
		}
		ll m, e2 = 0, o2 = 0; 	 cin >> m;
		while (m --) {
			ll x; 	cin >> x;
			if (x & 1) 	o2 += 1; 	else  	e2 += 1;
		}
		cout << e1 * e2 + o1 * o2 << "\n";
	}
}

