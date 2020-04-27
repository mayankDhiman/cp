#include <bits/stdc++.h>
using namespace std;

#define ll long long 

// abcde
// eabcd
// bcdea

/* e, b, d */
/* a, c, e */

/* abcd */
/* bcda */
/* dabc */
/* d, b */
/* a, */ 

int main() {
	/* if n is odd all must be equal */
	/* else a[i] == a[n/2 + i] */
	ll t; cin >> t;
	while (t --){
		string a; cin >> a;
		ll n = a.size(); 
		set <char> pos[n];
		for (ll i = 0; i < n; i ++){
			pos[(i + 1)%n].insert(a[i]);
			pos[((i - 1)%n + n)%n].insert(a[i]);
		}
		bool ok = 1;
		for (ll i = 0; i < n; i ++){
			if (pos[i].size() == 2) ok = 0;
		}
		if (ok) cout << "YES\n";
		else cout << "NO\n";
	}
}
