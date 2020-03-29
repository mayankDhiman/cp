#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n, ret = 0;	cin >> n;	
	bool dn[150002];	memset(dn, false, sizeof dn);
	vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];	sort(a.begin(), a.end());
	for (ll i = 0; i < n; i ++)
	{
		ll x = a[i];
		if (x - 1 > 0){
			if (!dn[x - 1]){
				ret += 1;
				dn[x - 1] = true;
				continue;
			}
		}
		if (!dn[x]){
			ret += 1;
			dn[x] = true;
			continue;
		}
		if (!dn[x + 1]){
			ret += 1;
			dn[x + 1] = true;
			continue;
		}
	}
	cout << ret << "\n";
}