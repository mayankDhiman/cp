// Two robots start at (0, 0) and (0, m - 1) in a m x n grid. Find maximum coin collected
// if the end point they need to reach respectively is (n - 1, 0) & (n - 1, m - 1).

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, m;
vector < vector <ll> > a;
vector < pair <ll, ll> > moves{{1, 0}, {1, -1}, {1, 1}}; 
ll ch[101][101][101][101];

ll dp(int i, int j, int k, int l) {
	ll ret = LLONG_MIN;
	if (i == 0 && j == n - 1 && k == m - 1 && l == n - 1){
		ll cr = a[i][j];
		if ({i, j} != {k, l})	cr += a[k][l];
		return cr;
	}
	if (!(i < n && j < m && k < n && l < m && i >= 0 && j >= 0 && k >= 0 && l >= 0)){
		return LLONG_MIN;
	}

	if (ch[i][j][k][l] != -1)	return ch[i][j][k][l];

	for (ll ii = 0; ii < 3; ii ++) {
		for (ll jj = 0; jj < 3; jj ++) {
			ll cr = dp(i + moves[ii].first, j + moves[ii].second, 
					  k + moves[jj].first, l + moves[jj].second);
			cr += a[i][j];
			if ({i, j} != {k, l})	cr += a[k][l];
			ret = max(ret, cr);
		}
	}
	return ch[i][j][k][l] = ret;
}

int main() {
	ll n, m;	cin >> n >> m;
	a.resize(n, vector <ll> (m));
	memset(ch, -1, sizeof ch);	
	for (ll i = 0; i < n; i ++) {
		for (ll j = 0; j < m; j ++) {
			cin >> a[i];
		}
	}
	cout << dp(0, 0, 0, m - 1) << "\n";
}
