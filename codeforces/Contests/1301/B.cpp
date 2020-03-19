#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;

	while (t --)
	{
		ll n;	cin >> n;
		vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];

		if (accumulate(a.begin(), a.end(), 0*1ll) == -n){
			cout << "0 1\n";
			continue;
		}
		set <ll> b;
		for (ll i = 0; i < n; i ++){
			if (a[i] != -1)
			{
				if (i == 0){
					if (a[i + 1] == -1)	b.insert(a[i]);
				}
				else if (i == n - 1){
					if (a[i - 1] == -1)	b.insert(a[i]);
				}
				else{
					if (a[i - 1] == -1 || a[i + 1] == -1){
						b.insert(a[i]);
					}			
				}
			}
		}

		ll mx = *max_element(b.begin(), b.end()), mn = *min_element(b.begin(), b.end());
		ll ht = mn + (mx - mn + 1)/2;
		for (ll i = 0; i < n; i ++){
			if (a[i] == -1)	a[i] = ht;
		}
		ll m = 0;
		for (ll i = 1; i < n; i ++){
			m = max(m, abs(a[i] - a[i - 1]) );
		}
		cout << m << " " << ht << "\n";		
	}
}
