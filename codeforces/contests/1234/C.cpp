#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main () {
	ll t; cin >> t;
	while (t --) {
		ll n; cin >> n;
		vector < vector <ll> > A(2, vector <ll> (n));
		for (ll i = 0; i < n; i ++) {
			char x; cin >> x; ll y = x - '0';
			A[0][i] = y;
		}	
		for (ll i = 0; i < n; i ++) {
			char x; cin >> x; ll y = x - '0';
			A[1][i] = y;
		}
		ll cr = 0; bool ok = 1;
		for (ll i = 0; i < n; i ++) {
			if (A[cr][i] >= 3 && A[cr][i] <= 6){
				if (A[1 - cr][i] >= 3 && A[1 - cr][i] <= 6){
					cr = 1 - cr;
				}	
				else{
					ok = 0; break;
				}
			}
		}
		if (cr == 1 && ok) cout << "YES\n";
		else 	cout << "NO\n";
	}
}

