using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll n, k;	cin >> n >> k;
	vector<ll> a(n);	for (int i = 0; i < n; i++)	cin >> a[i];
	string s;	cin >> s;
	ll l = 0, r = 0, res = 0;
	ios_base::sync_with_stdio(0);	cin.tie(0);
	while (l < n)
	{
		while (r < n && s[r] == s[l])
			r += 1;
		vector<ll> t;
		for (ll i = l; i < r; i++)
			t.push_back(a[i]);
		sort(t.begin(), t.end(), [](ll x, ll y)
			{
				return (x > y);
			});
		res = accumulate(t.begin(), t.begin() + min(k, (long long)t.size()), res);
		l = r;
	}
	cout << res << endl;
}