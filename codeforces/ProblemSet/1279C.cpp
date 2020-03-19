#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		ll n, m;	cin >> n >> m;
		vector <ll> a(n), b(m);
		for (ll i = 0; i < n; i ++)	cin >> a[i];
		for (ll i = 0; i < m; i ++)	cin >> b[i];	set <ll> bs(b.begin(), b.end());
		ll res = 0, j = 0, pre = 0;	set <ll> onesec;
		for (ll i = 0; i < m; i ++){
			if (onesec.find(b[i]) != onesec.end()){
				res += 1;
			}
			else{
				while (a[j] != b[i]){
					if (bs.find(a[j]) != bs.end()){
						onesec.insert(a[j]);
					}
					j ++;
				}
				ll abv = j - pre; 
				res += (2 * abv + 1);
			}
			pre += 1;
			bs.erase(b[i]);
		}
		cout << res << "\n";
	}
}