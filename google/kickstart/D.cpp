#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n, m, a, b, c, d;
vector < vector <double> > cache(305, vector<double> (305, -1));

double dp1(ll i, ll j) {
	double ret = 0;
	if (i >= a && j >= b && i <= c && j <= d)
		return double(0.0);
	if (i == n && j == m){
		return double(1.0);
	}
	if (cache[i][j] != -1.0){
		return cache[i][j];
	}
	if (i < n && j < m){
		ret += 0.5 * dp1(i + 1, j) + 0.5 * dp1(i, j + 1);
	}
	if (i == n){
		ret += dp1(i, j + 1);
	}
	if (j == m){
		ret += dp1(i + 1, j);
	}
	return cache[i][j] = ret;	
}


int main() {
	ll t;	cin >> t;
	for (ll T = 1; T <= t; T ++) {
		for (auto &i : cache){
			for (auto &j : i)	j = -1.0;
		}
		cin >> n >> m >> a >> b >> c >> d;
		cout << "Case #" << T << ": ";
		cout << fixed << setprecision(6) << dp1(1, 1) << "\n";
	}	
}

