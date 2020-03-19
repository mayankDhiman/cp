using namespace std;
#include <bits/stdc++.h>

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		ll n, m;	cin >> n >> m;		
		vector < vector <int> > count(n, vector <int> (26, 0));
		vector <int> _count(26, 0);

		for (ll i = 0; i < n; i ++)
		{
			char x; cin >> x;
			ll _x = x - 'a';
			_count[_x] += 1;
			count[i] = _count;
		}

		vector <ll> result(26);

		for (ll i = 0; i < m; i ++){
			ll x;	cin >> x;	x -= 1;
			for (ll ii = 0; ii < 26; ii ++){
				result[ii] += count[x][ii];
			}
		}	

		for (ll ii = 0; ii < 26; ii ++){
			result[ii] += count[n - 1][ii];
		}

		for (ll i = 0; i < 26; i ++){
			cout << result[i] << " ";
		}	cout << "\n";

	}
}