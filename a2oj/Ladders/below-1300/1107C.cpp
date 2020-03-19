// // 
// (4 - 1) + 1 >  k 
// a + 1 to a + 2

using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n, k; cin >> n >> k;
	ll a[n + 1];	for (ll i = 0; i < n; i++)	cin >> a[i];
	string s; cin >> s;
	s += ' ';
	vector<pair<ll, ll>> ends;
	ll start = 0;
	
	for (ll i = 0; i < n; i++)
	{
		if (s[i + 1] != s[i])
		{
			ends.push_back(make_pair(start, i));
			start = i + 1;
		}
	}


	// for (int i = 0; i < ends.size(); i++)
	// 	cout << ends[i].first << "  " << ends[i].second << endl;

	for(ll i = 0; i < ends.size(); i++)
		sort(a + ends[i].first, a + ends[i].second + 1, greater<ll>());

	ll res = 0;

	for (ll i = 0; i < ends.size(); i++)
	{
		ll t = (ends[i].second - ends[i].first) + 1;
		if (t <= k)
		{
			res += accumulate(a + ends[i].first, a + ends[i].first + t, 0);
		}			
		else
		{
			res += accumulate(a + ends[i].first, a + ends[i].first + k, 0);
		}
		
	}

	cout << res << endl;

}