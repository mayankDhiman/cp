#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--){
		ll n, x;	cin >> n >> x;
		vector <bool> tk(1000, 0);	
		for (ll i = 0; i < n; i ++){
			ll x;	cin >> x;
			tk[x] = 1;
		}
		for (ll i = 0; i < x; i ++) {
			for (ll j = 1; j < tk.size(); j ++){
				if (!tk[j]){
					tk[j] = 1;
					break;
				}
			}
		}
		cout << (find(tk.begin() + 1, tk.end(), 0) - tk.begin()) - 1 << "\n";
	}
}