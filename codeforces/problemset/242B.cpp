#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll n;	cin >> n;
	vector <pair<ll, ll>> a;

	ll mx = LLONG_MIN, mn = LLONG_MAX;
	for (ll i = 0; i < n; i ++){
		ll t1, t2;	cin >> t1 >> t2;
		mn = min(t1, mn);
		mx = max(t2, mx);
		a.push_back(make_pair(t1, t2));
	}

	ll res = 1;
	for (pair<ll, ll> i : a){
		if (i.first == mn && i.second == mx){
			cout << res << "\n";
			return 0;
		}
		res += 1;
	}

	cout << "-1\n";
}	