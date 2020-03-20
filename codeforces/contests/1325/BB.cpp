#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		ll n;	cin >> n;		
		set <ll, greater <ll> > a;
		for (ll i = 0; i < n; i ++){
			ll x;	cin >> x;
			if (x % 2 == 0){
				a.insert(x);
			}
		}
		ll res = 0;
		for (auto i : a)
		{
			ll b = i;
			while (b % 2 == 0){
				b = b / 2;
				if (a.find(b) != a.end()){
					a.erase(b);
				}
				res += 1;
			}
		}
		cout << res << "\n";
	}
}