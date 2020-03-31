#include <bits/stdc++.h>
using namespace std;

#define ll long long

// FIXME

int main()
{
	ll n, k;	cin >> n >> k;
	vector <ll> a(n);
	for (ll i = 0; i < n; i ++){
		char x;	cin >> x;
		a[i] = x - 'a';
	}
	ll ret = 0;	
	for (ll i = 0; i < k/2; i ++)
	{
		ll r = LLONG_MAX;
		for (ll c = 0; c < 26; c ++)
		{
			ll cn = 0;
			for (ll j = i; j < n; j += k)
			{
				ll mi = j % k;
				if (a[j + mi] != c)	cn += 1;
				if (a[j + k - 1 - mi] != c) cn += 1;
			}	
			r = min(r, cn);
		}
		ret += r;
	}
	if (k % 2 == 1){
		ll ix = k/2, r = LLONG_MAX;
		for (ll c = 0; c < 26; c ++){
			ll cn = 0;
			for (ll j = ix; j < n; j += k){
				if (a[j] != c)	cn += 1;
			}	
			r = min(r, cn);
		}
		ret += r;
	}

	cout << ret << "\n";
}