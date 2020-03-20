#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		ll n, m, r = 0;	cin >> n >> m;	
		for (ll i = 0; i < n; i ++){
			ll a;	cin >> a;
			if (i)	r += a;
		}
		cout << min(m, r);
	}

}