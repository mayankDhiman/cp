#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<bool> visited;
vector < vector <ll> > aj;
vector <char> res;

void dfs(ll v, ll c) {
    visited[v] = true;
    if (c == 1)	res[v] = 'C';
    else	res[v] = 'J';
    for (ll u : aj[v]) {
        if (!visited[u])
            dfs(u, 1 - c);
    }
}
int main()
{
	ll t;	cin >> t;
	for (int T = 1; T <= t; T ++) {
		ll n;	cin >> n;
		vector < pair <int, int> > a(n);
		for (ll i = 0; i < n; i ++) {
			ll x, y;	cin >> x >> y;
			a[i].first = x;	a[i].second = y;
		}
		vector < vector <ll> > b(n);
		for (ll i = 0; i < n; i ++) {
			for (ll j = 0; j < n; j ++) {
				if (i != j) {
					ll p = a[i].first, q = a[i].second, r = a[j].first, s = a[j].second;
					ll pp = max(p, r);
					ll qq = min(q, s);
					if (pp < qq) {
						b[i].push_back(j);
					}
				}
			}
		}
		visited.clear();
		aj.clear();
		res.clear();
		res.resize(n);
		visited.resize(n, false);
		aj = b;
		for (ll i = 0; i < n; i ++) {
			if (!visited[i])
				dfs(i, 0);
		}
		bool ok = 1;
		for (ll i = 0; i < n; i ++) {
			char cr = res[i];
			for (ll j = 0; j < aj[i].size(); j ++) {
				if (res[aj[i][j]] == cr){
					ok = 0;
				}
			}
		}
		if (ok){
			cout << "Case #" << T << ": ";
			for (auto x : res)	cout << x;	cout << "\n";		
		}
		else
			cout << "Case #" << T << ": " << "IMPOSSIBLE" << "\n";
	}
}
