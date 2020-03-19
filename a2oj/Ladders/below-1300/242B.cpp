using namespace std;
using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()

{	ll n; cin >> n;
	vector<pair<ll, ll>> a;
	for (int i = 0; i < n; i++)
	{
		int t1, t2;	cin >> t1 >> t2;
		a.push_back(make_pair(t1, t2));		
	}
	ll l = a.begin()->first, r = a.begin()->second;
	for (int i = 0; i < n; i++)
	{
		if (a[i].first < l)
			l = a[i].first;
		if (a[i].second > r)
			r = a[i].second;
	}
	ll res = -1;
	for (int i = 0; i < n; i++)
		if (a[i].first == l and a[i].second == r)
		{
			res = i + 1;
			break;
		}
	cout << res << endl;
}