#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		ll n;	cin >> n;
		vector <ll> pos[5001];
		for (ll i = 0; i < n; i ++){
			ll x;	cin >> x;
			pos[x].push_back(i);
		}
		bool ok = 0;
		for (ll m = 1; m <= 5000; m ++)
		{
			if (pos[m].size() > 2){
				ok = 1;
				break;
			}
			if (pos[m].size() == 2){
				if (pos[m][1] - pos[m][0] > 1){
					ok = 1;
					break;
				}
			}
		}
		if (ok){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}		
	}
}