#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		ll n;	cin >> n;
		string a;	cin >> a;

		ll res = -1;	string max;	for (ll i = 0; i < n + 1; i ++)	max += 'z';

		for (ll k = 1; k <= n; k ++){
			string x = a.substr(k - 1, n - (k - 1)), y;
			
			if (k > 1)
			{
				y = a.substr(0, k - 1);
				if ( (n - k + 1) % 2 != 0){
					reverse(y.begin(), y.end());
				}				
			}
			string xy = x + y;
			if (xy < max){
				res = k;
				max = xy; 
			}
		}
		cout << max << "\n";
		cout << res << "\n";
	}

}