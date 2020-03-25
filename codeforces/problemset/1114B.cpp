#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll n, m, k;	cin >> n >> m >> k;
	vector < pair<ll, ll> > a(n);
	for (ll i = 0; i < n; i++)
	{
		ll t1;	cin >> t1;
		a[i] = make_pair(t1, i);
	}
	sort(a.begin(), a.end(), [](const pair <ll, ll> a, const pair <ll, ll> b){
		return (a.first > b.first);
	});
	vector <ll> idx;
	ll res = 0;
	for (ll i = 0; i < m * k; i ++)
	{
		res += a[i].first;
		idx.push_back(a[i].second);
	}
	sort(idx.begin(), idx.end());
	cout << res << "\n";
	for (ll i = m - 1; i <= m * (k - 1) - 1; i += m){
		cout << idx[i] + 1 << " ";
	}
	cout << "\n";
	return 0;
}