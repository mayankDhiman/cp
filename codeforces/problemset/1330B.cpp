#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n;
vector <ll> a;

bool ok(ll s) {
	vector <ll> b1(a.begin(), a.begin() + s), b2(a.begin() + s, a.end());
	sort(b1.begin(), b1.end());	sort(b2.begin(), b2.end());
	for (ll i = 0; i < b1.size(); i ++){
		if (b1[i] != i + 1)	return 0;
	}
	for (ll i = 0; i < b2.size(); i ++){
		if (b2[i] != i + 1)	return 0;
	}
	return 1;
}

int main()
{
	ll t;	cin >> t;	
	while (t--){
		cin >> n;
		a.resize(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];
		ll mx = *max_element(a.begin(), a.end());
		set <ll> ret;
		if (ok(mx))	ret.emplace(mx);
		if (ok(n - mx))	ret.emplace(n - mx);
		cout << ret.size() << "\n";
		for (auto r : ret)
			cout << r << " " << n - r << "\n";
	}
}