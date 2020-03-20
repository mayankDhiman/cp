#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		ll n;	cin >> n;
		vector <ll> a(n);
		for (ll i = 0; i < n; i ++){
			cin >> a[i];
		}	
		ll mx = *max_element(a.begin(), a.end());
		bool ok = 1;
		for (ll i = 0; i < n; i ++){
			if ( (mx - a[i]) % 2 == 1 ){
				ok = 0;
				break;
			}
		}
		if (ok)	cout << "YES\n";
		else 	cout << "NO\n";
	}
}