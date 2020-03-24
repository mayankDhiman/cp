#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll q;	cin >> q;
	while (q--){
		ll res = 1, n;	cin >> n;	ll a[n];
		for (ll i = 0; i < n; i ++){
			cin >> a[i];
		}
		sort(a, a + n);	bool ok = 0;
		for (ll i = 1; i < n; i ++)
			ok |= (a[i] - a[i - 1] == 1);
		if (ok)	cout << "2\n";
		else	cout << "1\n";
	}
}