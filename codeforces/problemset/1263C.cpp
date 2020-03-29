#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll q;	cin >> q;
	while (q--){
		ll n;	cin >> n;
		set <ll> ret;
		for (ll i = 1; i*i <= n; i ++){
			ret.emplace(n/i);
			ret.emplace(i);
		}
		ret.emplace(0);	
		cout << ret.size() << "\n";
		for (auto r : ret)	cout << r << " ";	cout << "\n";
	}
}
