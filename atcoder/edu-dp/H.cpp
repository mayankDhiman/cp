#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n, m, mod = 1e9 + 7;	cin >> n >> m;
	char a[n][m]; ll dp[n][m];	memset(dp, 0, sizeof dp);
	for (ll i = 0; i < n; i ++){
		for (ll j = 0; j  < m; j ++){
			cin >> a[i][j];
		}	
	}	
	dp[0][0] = 1;
	for (ll i = 0; i < n; i ++){
		for (ll j = 0; j < m; j ++){
			if (a[i][j] == '.'){
				if (i > 0)
					dp[i][j] = (dp[i][j] + dp[i - 1][j]%mod)%mod;
				if (j > 0)
					dp[i][j] = (dp[i][j] + dp[i][j - 1]%mod)%mod;
			}
		}
	}
	cout << (dp[n - 1][m - 1]%mod + mod)%mod << "\n";
}