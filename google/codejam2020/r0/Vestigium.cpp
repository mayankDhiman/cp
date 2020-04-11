#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	for (ll T = 1; T <= t; T ++) {
		ll n;	cin >> n;
		vector < vector <int> > a(n, vector <int> (n));
		ll k = 0, r = 0, c = 0;
		for (int i = 0; i < n; i ++) {
			for (int j = 0; j < n; j ++) {
				ll x;	cin >> x;
				if (i == j) k += x;
				a[i][j] = x;
			}
		}

		for (int i = 0; i < n; i ++) {
			bool dn[n + 1];	memset(dn, false, sizeof dn);
			for (int j = 0; j < n; j ++) {
				if (dn[a[i][j]]){
					r += 1;
					break;
				}
				dn[a[i][j]] = 1;
			}
		}

		for (int i = 0; i < n; i ++) {
			bool dn[n + 1];	memset(dn, false, sizeof dn);
			for (int j = 0; j < n; j ++) {
				if (dn[a[j][i]]){
					c += 1;
					break;
				}
				dn[a[j][i]] = 1;
			}
		}

		cout << "Case #" << T << ": " << k << " " << r << " " << c << "\n";

	}
}


// 3 1 2

// (((3))1(2))