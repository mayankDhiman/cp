#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		ll n;	cin >> n;
		set <ll> a;
		for (ll i = 0; i < n; i ++){
			ll x;	cin >> x;
			a.insert(x);
		}
		cout << a.size() << "\n";
	}
}