#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
	ll t; 	cin >> t;
	while (t --) {
		ll n, m, s = 0; 
		cin >> n; 
		m = n;
		while (n --) {
			ll x; cin >> x;
			s += x;
		}
		cout << (s/m) + (s%m != 0) << "\n";
	
	}
}

