#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		ll n;	cin >> n;
		set <ll> unmarried;	for (ll i = 0; i < n; i ++)	unmarried.insert(i + 1);
		vector <ll> ugly;

		bool ok = 0;	pair <ll, ll> res;
		for (ll i = 0; i < n; i ++){
			ll k;	cin >> k;

			ll fr = -1;
			while (k--){
				ll x;	cin >> x;
				if ( (unmarried.find(x) != unmarried.end()) && (fr==-1)){
					unmarried.erase(x);
					fr = 1;
				}
			}
			if (fr == -1){
				ugly.push_back(i + 1);
				ok = 1;
			}
		}

		if (ok){
			cout << "IMPROVE\n";
			cout << ugly[0] << " " << *unmarried.begin() << "\n";
		}
		else{
			cout << "OPTIMAL\n";
		}

	}
}