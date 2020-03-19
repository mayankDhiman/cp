#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n, A, b, k;	cin >> n >> A >> b >> k;
	vector <ll> a(n);	for (ll i = 0; i < n; i ++) 	cin >> a[i];

	ll x = A + b, res = 0;
	multiset <ll> extra;

	for (ll i = 0; i < n; i ++)
	{
		ll rem = a[i] % x;	if (rem == 0)	rem = x;
		if (rem <= A){
			res += 1;
		}
		else{
			ll y = rem / A;	if (rem % A == 0)	y -= 1;
			extra.insert(y);			
		}
	}

	for (auto e : extra){
		if ((k - e) >= 0){
			k -= e;
			res += 1;
		}
	}
	cout << res << '\n';
}