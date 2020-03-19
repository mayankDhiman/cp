#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	// ios_base::sync_with_stdio(0);	cin.tie(0);

	ll n, m, p;	cin >> n >> m >> p;
	ll i1 = -1, i2 = -1;	

	for (ll i = 0; i < n; i ++){
		ll x;	cin >> x;
		if ( (x%p != 0) && (i1 == -1) ){
			i1 = i;
		}
	}

	for (ll i = 0; i < m; i ++){
		ll x;	cin >> x;
		if ( (x%p != 0) && (i2 == -1) ){
			i2 = i;
		}
	}

	cout << i1 + i2 << "\n";
}