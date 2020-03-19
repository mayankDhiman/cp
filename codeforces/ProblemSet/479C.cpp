#define ll long long

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ll n;	cin >> n;
	vector <pair<ll, ll>> a(n);
	for (ll i = 0; i < n; i ++){
		ll t1, t2;	cin >> t1 >> t2;
		a[i] = make_pair(t1, t2);
	}

	sort(a.begin(), a.end());
	ll res = a[0].second;

	for (ll i = 1; i < n; i++)
	{
		if (a[i].second >= res){
			res = a[i].second;
		} 		
		else{
			res = a[i].first;
		}
	}

	cout << res << "\n";

}