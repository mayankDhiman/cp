#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t;	cin >> t;
	while (t--) {
		ll n, k;	cin >> n >> k;	
		vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];
		sort(a.begin(), a.end());	reverse(a.begin(), a.end());
		ll ret = 0, rem = 0;	
		for (ll i = 0; i < n; i ++) {
			a[i] += rem;
			if (a[i] >= k)	{
				ret += 1;
				rem = a[i] - k;
			}
		}
		cout << ret << "\n";
	}

}
