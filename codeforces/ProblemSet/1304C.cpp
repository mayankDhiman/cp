#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll q;	cin >> q;
	while (q --)
	{
		bool ok = 1;
		ll n, m;	cin >> n >> m;
		ll t = 0, mn = m, mx = m;
		ll br = -1;
		while (n --)
		{
			ll ct, l, h;	cin >> ct >> l >> h;
			ll k = ct - t;
			if (br == -1){
				if ( (mn - k > h) || (mx + k < l)  ){
					ok = 0;
					br = 1;
				}
			}
			mn = max(mn - k, l);
			mx = min(mx + k, h);
			t = ct;
		}

		if (ok){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}