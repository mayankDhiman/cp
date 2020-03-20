#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		ll n;	cin >> n;
		vector <ll> a(2*n);	for (ll i = 0; i < 2*n; i ++)	cin >> a[i];
		sort(a.begin(), a.end());
		cout << abs(a[(2*n)/2] - a[(2*n)/2 - 1]) << "\n";
	}
}