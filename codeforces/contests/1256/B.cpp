#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll q;	cin >> q;
	while (q--)
	{
		ll n;	cin >> n;
		vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];
		
		ll rep = 0;	vector <bool> aa(n, true);	aa[n - 1] = false;
		while (rep < n - 1){
			ll loc = -1; bool leave = 1;	ll mn = LLONG_MAX;
			

			for (ll i = 0; i < n - 1; i ++){
				if (aa[i]){
					if ( (a[i] > a[i + 1]) && (a[i + 1] < mn) ){
						loc = i;
						mn = min(mn, a[i + 1]);
						leave = 0;
					}
				}
			}


			if (!leave){
				swap(a[loc], a[loc + 1]);
				aa[loc] = 0;
			}	
			else	break;

			// for (auto x : a)	cout << x << " ";	cout << "\n";

			rep += 1;
		}

		for (auto i : a){
			cout << i << " ";
		}	cout << "\n";

	}
}