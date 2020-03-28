#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll q;	cin >> q;
	while (q--){
		ll n, m;	cin >> n;
		vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];
		vector <ll> b(n);	for (ll i = 0; i < n; i ++)	cin >> b[i];
		vector <ll> c(n);	for (ll i = 0; i < n; i ++)	c[i] = b[i] - a[i];
		bool f = 1;
		for (auto x : c){
			if (x < 0){
				f = 0;
				break;
			}
		}
		if (!f){
			cout << "NO\n";
			continue;
		}
		if (a == b){
			cout << "YES\n";
			continue;
		}
		multiset <ll> patches;
		ll i = 0, j = 0;
		for (; i < n && j < n;){
			if (c[i])
				patches.emplace(c[i]);
			while (c[j] == c[i] && j < n)	j += 1;
			i = j;
		}

		if (patches.size() == 1){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}
