// Mayank Dhiman

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t; cin >> t;
	while (t--) {
		ll n, a, b, c, d; cin >> n >> a >> b >> c >> d;
		ll lo = n*(a - b), hi = n*(a + b);
	        if (hi < (c - d) or lo > (c + d)) cout << "No\n";
		else 	cout << "Yes\n";	
	}
}
