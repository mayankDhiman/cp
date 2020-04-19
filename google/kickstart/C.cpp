// Good question from overflow point of view. Take care of division overflows.

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t, mod = 1000000000;	cin >> t;
	for (ll T = 1; T <= t; T ++) {
		string a;	cin >> a;
	        ll x = 0, y = 0, mod = 1e9;	stack <ll> ml;	ml.push(1);
		for (auto c : a) {
			if (c >= '2' && c <= '9') {
				ml.push(ml.top() * (c - '0')%mod);
			}
			else if (c == '(') continue;
			else if (c == ')') ml.pop();
			else if (c == 'N') y -= ml.top();
			else if (c == 'S') y += ml.top();
			else if (c == 'E') x += ml.top();
			else if (c == 'W') x -= ml.top();
			x = (x%mod + mod)%mod;
			y = (y%mod + mod)%mod;
		}	
		cout << "Case #" << T << ": " << x + 1 << " " << y + 1 << "\n";
	}	
}

