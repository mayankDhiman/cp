#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll q;	cin >> q;
	while (q--){
		ll n;	cin >> n;
		set <ll> a[n];		
		for (ll i = 0; i < n; i ++){
			ll x;	cin >> x;
			for (ll j = 2; j*j <= x; j ++){
				if (x % j == 0){
					ll f1 = j, f2 = x / j;
					a[i].insert(f1);
					a[i].insert(f2);
				}
			}
		}
		vector <ll> ret(n);
		vector <ll> pos[600]; 
		for (ll i = 0; i < n; i ++){
			for (auto x : a[i]){
				pos[x].push_back(i);
			}
		}
		ll m = 1;
		for (ll i = 2; i <  600 ; i ++){
			bool inc = 0;
			for (auto x : pos[i]){
				if (ret[x] == 0){
					inc = 1;
					ret[x] = m;
				}
			}
			if (find(ret.begin(), ret.end(), 0) == ret.end()){
				break;
			}
			m += inc;
		}
		cout << m << "\n";
		for (auto x : ret)	cout << x << " ";	cout << "\n";
	}
}