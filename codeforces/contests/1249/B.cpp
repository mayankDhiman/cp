#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll q;	cin >> q;
	while (q --){
		ll n;	cin >> n;
		vector <ll> a(n);for (ll i = 0; i < n; i ++){
			cin >> a[i];
		}
		vector <ll> result(n);	vector <bool> dn(n, false);
		for (ll i = 0; i < n; i ++){
			ll res = 0, curr = (i + 1);
			vector <ll> reached; 
			if (dn[curr - 1]){
				continue;
			}
			while (1){
				curr = a[curr - 1];
				res += 1;
				reached.push_back(curr);
				if (curr == (i + 1) ){
					break;
				}
			}
			for (auto r : reached){
				result[r - 1] = res;
				dn[r - 1] = 1;
			}
		}
		for (auto r : result)	cout << r << " ";	cout << "\n";
	}
}