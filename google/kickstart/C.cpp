#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t, mod = 1000000000;	cin >> t;
	for (ll T = 1; T <= t; T ++) {
		string a;	cin >> a;	ll n = a.size();
		vector <ll> d(4);
		ll cr = 1;	stack <ll> ml;
		for (ll i = 0; i < n; i ++) {
			if ((a[i] >= '2') && (a[i] <= '9')){	
				cr = (cr * (a[i] - '0')%mod)%mod;
				ml.push(a[i] - '0');
			}
			if (a[i] == ')'){
				cr /= ml.top();
				ml.pop();
			}
			if (a[i] == 'N')	d[0] = (d[0] + cr%mod)%mod;
			else if (a[i] == 'S')	d[1] = (d[1] + cr%mod)%mod;
		    else if (a[i] == 'E')	d[2] = (d[2] + cr%mod)%mod;
			else if (a[i] == 'W') 	d[3] = (d[3] + cr%mod)%mod;	
		}
        // for (auto x : d)	cout << x << " ";	cout << "\n";		
		ll x = 1, y = 1;
		x = (x + (d[2] - d[3]));
		y = (y + (d[1] - d[0]));
		x = (x%mod + mod)%mod;
		y = (y%mod + mod)%mod;
		if (x == 0)	x = mod;
		if (y == 0)	y = mod;
		cout << "Case #" << T << ": " << x << " " << y << "\n";
	}	
}

