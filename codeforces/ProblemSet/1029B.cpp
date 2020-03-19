// 4
// 1 2 4 6


#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);	cin .tie(0);

	ll n;	cin >> n;
	ll a[n];	for (ll i = 0; i < n; i ++)	cin >> a[i];

	ll res = LLONG_MIN;

	for (ll i = 0; i < n; )
	{
		ll j = i;
		while(j + 1 < n && a[j + 1] <= 2*a[j]){
			j += 1;
		}
		res = max(res, j - i + 1);
		i = j + 1;
	}

	cout << res << "\n";
}