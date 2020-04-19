#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector <ll> g[200001];
vector <ll> d(200001), sz(200001), det(200005); 

// if at some point play node lie then all nodes above it will be play too
// causing benefit of sz[u] - 1 nodes and loss of d[u] - 1 making net determinant
// sz[u] - d[u]. 

int dfs(int u, int f) {
	d[u] = d[f] + 1;
	sz[u] = 1;
	for (auto v : g[u]) {
		if (v == f)	continue;
		sz[u] += dfs(v, u); // avoid going back to parent	
	}
	det[u] = sz[u] - d[u]; // sz[u] benefit and d[u] loss
	return sz[u];
}

int main(){
	ll n, k;	cin >> n >> k;
	for (ll i = 1; i < n; i ++) {
		ll x, y;	cin >> x >> y;
		g[x].push_back(y);	g[y].push_back(x);
	}
        dfs(1, 0);	
	sort(det.begin() + 1, det.begin() + n + 1, greater <ll> ());
	ll ret = 0;
	for (ll i = 1; i <= n - k; i ++) ret += det[i];
	cout << ret << "\n";
}
