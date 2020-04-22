#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	string a; cin >> a; 
	set <ll> pos[26];
	for (ll i = 0; i < a.size(); i ++) {
		pos[a[i] - 'a'].emplace(i + 1);
	}
	ll q; cin >> q;
	while (q--) {
		ll t; cin >> t;
		if (t == 1){
			ll p0; char p1; cin >> p0 >> p1;
			//cout << t << " " << p0 << " " << p1 << "\n";
			pos[a[p0 - 1] - 'a'].erase(p0);
			pos[p1 - 'a'].emplace(p0);
			a[p0 - 1] = p1;
		}
		else{
			ll p0, p1; cin >> p0 >> p1;
			ll res = 0;
			for (ll i = 0; i < 26; i ++) {
				auto ix = pos[i].lower_bound(p0);
				if (ix != pos[i].end()){
					if (*ix <= p1)
						res += 1;
				}
			}
			cout << res << "\n";
		}
	}
}

