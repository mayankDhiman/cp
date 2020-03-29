#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n, m;	cin >> n >> m;
	ll a[n][m], b[n][m];	memset(b, 0, sizeof b);
	for (ll i = 0; i < n; i ++)	for (ll j = 0; j < m; j ++)	cin >> a[i][j];
	
	// for (ll i = 0; i < n; i ++){
	// 	for (ll j = 0; j < m; j ++){
	// 		cout << a[i][j] << " ";
	// 	}	cout << "\n";
	// }

	vector < pair <ll, ll>  > ret;
	for (ll i = 0; i < n - 1; i ++)
	{
		for (ll j = 0; j < m - 1; j ++)
		{
			if ( (a[i][j] == 1) && (a[i][j + 1] == 1) && (a[i + 1][j] == 1) && (a[i + 1][j + 1] == 1)){
				ret.push_back({i, j});
				b[i][j] = 1;
				b[i][j + 1] = 1;
				b[i + 1][j] = 1;
				b[i + 1][j + 1] = 1;				
			}
		}
	}

	// for (ll i = 0; i < n; i ++){
	// 	for (ll j = 0; j < m; j ++){
	// 		cout << b[i][j] << " ";
	// 	}	cout << "\n";
	// }

	bool ok = 1;
	for (ll i = 0; i < n; i ++)	for (ll j = 0; j < m; j ++)	ok &= (!(b[i][j] != a[i][j]));

	if (ok){
		cout << ret.size() << "\n";
		for (auto x : ret)	cout << x.first + 1 << " " << x.second + 1 << "\n";
	}
	else{
		cout << "-1\n";
	}
}