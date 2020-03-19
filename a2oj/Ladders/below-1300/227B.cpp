using namespace std;

#define ll long long

#include <bits/stdc++.h>
int main()
{
	ll n; cin >> n;
	ll a[n];
	map <ll, ll> pos;
	for (ll i = 0; i < n; i++)
	{
		ll t; cin >> t;
		pos[t] = i + 1;
	}
	// for (auto i : pos)	cout << i.first << "\t" << i.second << endl;	
	ll m; cin >> m;
	ll r1 = 0; 
	ll r2 = 0;
	while (m --)
	{
		ll t; cin >> t;
		r1 += pos[t];
		r2 += n + 1 - pos[t];
	}
	cout << r1 << " " << r2 << endl;
}