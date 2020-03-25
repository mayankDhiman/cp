#define ll long long

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ll n;	cin >> n;
	vector <pair<ll, ll>> a(n);
	for (ll i = 0; i < n; i ++)
	{
		ll t1, t2; cin >> t1 >> t2;
		a[i] = make_pair(t1, t2);
	}
	a.push_back(make_pair(LLONG_MAX, -1));

	sort(a.begin(), a.end());
	ll res = 1;
	for (ll i = 1; i < n; i++)
	{
		if (a[i].first - a[i].second > a[i - 1].first){
			res += 1;
		}
		else if (a[i].first + a[i].second < a[i + 1].first){
			res += 1;
			a[i].first = a[i].first + a[i].second;
		}
	}

	cout << res << "\n";
}

