#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n;	cin >> n;	vector <ll> a(n);	for (ll i = 0; i < n;i ++)	cin >> a[i];
	vector <ll> pos[26];
	vector < vector <ll> > pr(n + 1, 26), sf(n + 1, 26);
	for (ll i = 1; i < n; i ++) {
		pr[i][a[i] - 1] = pr[i - 1][a[i] - 1] + 1;
	}	
	for (ll n - 1; i >= 0; i ++) {
		pr[i][a[i] - 1] = pr[i + 1][a[i] - 1] + 1;
	}

	ll ret = 0;
	for (ll i = 0; i < 26; i ++) {
		for (ll j = 0; j < pos[i].size(); j ++) {
			for (ll k = j + 1; k < pos[i].size(); k ++) {
				ll md = pr[k + 1][i] - pr[j][i]; 
				ll sd = 0;
				for (ll i1 = 0; i1 < 26; i1 ++) {
					ll pc, ag;
					pc = pr[j][i1];
					ag = sf[k][i1];
					ll sdc = min(pc, ag);
					sd = max(sd, sdc);
					ret = max(ret, sd);
				}
		
			}
		}


	}

}
