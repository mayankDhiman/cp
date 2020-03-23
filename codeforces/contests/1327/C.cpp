#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	// ios_base::sync_with_stdio(0);	cin.tie(0);

	ll n, m, k;	cin >> n >> m >> k;
	string res;
	for (ll i = 0; i < n - 1; i ++)	res += 'U';
	for (ll i = 0; i < m - 1; i ++)	res += 'L';
	for (ll i = 0; i < n; i ++){
		for (ll j = 0; j < m - 1; j ++){
			if (i % 2)	res += 'L';
			else	res += 'R';
		}
		if (i != n - 1)
			res += 'D';
	}
	cout << res.size() << "\n" << res << "\n";
	return 0;
}