#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		string a; cin >> a;	
		ll pre = -1, n = a.size();
		ll res = -1;
		for (ll i = 0; i <= n; i ++)
		{
			if (i == n){
				res = max(i - pre, res);
			}
			else{
				if (a[i] == 'R'){
					// cout << i - pre << "\n";
					res = max(i - pre, res);
					pre = i;
				}
			}
		}
		if (res == -1){
			cout << n + 1 << "\n";
		}
		else{
			cout << res << "\n";
		}
	}
}