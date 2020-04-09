#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n, m;	cin >> n >> m;
	vector <ll> l(m);	for (ll i = 0; i < m; i ++)	cin >> l[i];

	if (accumulate(l.begin(), l.end(), 0*1ll) < n){
		cout << "-1\n";	return 0;
	} 
	for (ll i = 0; i < m; i ++){
		if (i + l[i] > n){
			cout << "-1\n";
			return 0;
		}
	}

	vector <ll> sf(m + 1);
	for (ll i = m - 1; i >= 0; i --){
		sf[i] = sf[i + 1] + l[i];
	}

	// After its possible to put all patches without overlapping
	for (ll i = 0; i < m; i ++){
		cout << max(i, n - sf[i]) + 1 << " ";
	}	cout << "\n";
}