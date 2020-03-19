#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{

		ll n;	cin >> n;
		vector < pair<ll, ll> > a(1001, {LLONG_MAX, LLONG_MIN});
		ll limit = 0;
		for (ll i = 0; i < n; i ++)
		{
			ll x, y;	cin >> x >> y;
			limit = max(limit, x);
			a[x].first = min(a[x].first, y);
			a[x].second = max(a[x].second, y);
		}
		ll curr = 0;
		bool ok = 1;
		string res = "";
		for (ll i = 0; i <= limit; i ++){
			if (i)
				res += 'R';
			if (a[i].first == LLONG_MAX && a[i].second == LLONG_MIN){
				continue;
			}
			if (a[i].first < curr){
				ok = 0;
				break;
			}
			while(curr < a[i].second){
				res += 'U';
				curr += 1;
			}
		}
		if (!ok){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
			cout << res << "\n";
		}
	}

}