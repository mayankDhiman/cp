using namespace std;
#define ll long long 

#include <bits/stdc++.h>


int main()
{	
	ll n; cin >> n;
	vector<vector<ll>> a(100001);
	for (ll i = 0; i < n; i ++)
	{
		ll temp; cin >> temp;
		a[temp].push_back(i);
	}
	// for (ll i = 0; i < 10; i++)
	// {
	// 	if (a[i].size () > 0)
	// 	{
	// 	for (auto it = a[i].begin(); it != a[i].end(); it++)
	// 	{
	// 		cout << *it << " ";			
	// 	}
			
	// 	cout << endl;
	// 	}
	// }
	vector<pair<ll, ll>> ans;
	for (ll i = 1; i <= 100001; i ++)
	{
		if (a[i].size() == 1)
			ans.push_back(pair<ll,ll>(i, 0));
		else if (a[i].size() > 1)
		{ 
			ll d = a[i][1] - a[i][0];
			bool ok = 1;
			// cout << d << " ";
			// cout <<i << " " << d << endl;
			for (ll j = 2; j < a[i].size(); j ++)				
			{
				if ((a[i][j] - a[i][j - 1]) != d);
				{
					// cout << d << " " <<  (a[i][j + 1] - a[i][j]) << endl;
					ok = 0;
					// break;
				}
			}
			if (ok)
				ans.push_back(pair<ll,ll>(i, d));	
		}
	}
	cout << ans.size() << endl;
	for (ll i = 0; i < ans.size(); i ++)
		cout << ans[i].first << " " << ans[i].second << endl;
}