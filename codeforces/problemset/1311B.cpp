#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		ll n, m;	cin >> n >> m;
		vector <ll> a(n); set <ll> p;
		for (ll i = 0; i < n; i ++)	cin >> a[i];
		for (ll i = 0; i < m; i ++){
			ll x;	cin >> x;	p.insert(x - 1);
		}

		int c = 0;
		while (1)
		{
			bool leave = 1;
			for (ll i = 0; i < n - 1; i ++)
			{
				if ( (a[i] > a[i + 1]) && (p.find(i) != p.end())  ){
					leave = 0;
					swap(a[i], a[i + 1]);
					break;
				}
			}		
			if (leave){
				break;
			}
		}

		bool ok = 1;
		for (ll i = 0; i < n - 1; i ++){
			if (a[i] > a[i + 1]){
				ok = 0;
				break;
			}
		}

		if (ok)	cout << "YES\n";
		else	cout << "NO\n";
	}
}