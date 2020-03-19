using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll T;	cin >> T;
	while(T--)
	{
		ll n;	cin >> n;
		ll a[n], d[n];	
		for (ll i = 0; i < n; i++)	cin >> a[i];
		for (ll i = 0; i < n; i++)	cin >> d[i];

		vector<ll> ans;
		if (d[0] > a[n - 1] + a[1])
			ans.push_back(d[0]);	
		if (d[n - 1] > a[n - 2] + a[0])
			ans.push_back(d[n - 1]);
		for (ll i = 1; i < n - 1; i++)
			if (d[i] > a[i - 1] + a[i + 1])
				ans.push_back(d[i]);

		if (ans.size() == 0)	cout << "-1\n";
		else	cout << *max_element(ans.begin(), ans.end()) << endl;;
	}
}