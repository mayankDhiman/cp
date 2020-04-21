// Good application of difference array.

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
	ll t; 	cin >> t;
	while (t --) {
		ll n, k; 	cin >> n >> k;
		vector <ll> A(n); 	
		for (auto &a : A) 	cin >> a;
		vector <ll> d(2*k, 0);

		for (ll i = 0; i < n/2; i ++) {
			ll &a = A[i], &b = A[n - i - 1];
			a -= 1; b -= 1; // Moving to system starting at 0.
			d[a + b] -= 1; d[a + b + 1] += 1;
			// all values between low and high can be taken care of using just one penalty.
			ll low = min(a, b), high = max(a, b) + k - 1;
			d[low] -= 1; 	d[high + 1] += 1;  		
		}
		
		ll cs = 2*(n/2), res = LLONG_MAX;
		for (ll i = 0; i < 2*k; i ++){
			cs += d[i];
			res = min(res, cs);
		}
		cout << res << "\n";
	}
}
