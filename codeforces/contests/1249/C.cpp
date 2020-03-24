#include <bits/stdc++.h>
using namespace std;

#define ll long long






vector <ll> foo(ll n)
{
	vector <ll> ret;
	while (n > 0){
		ret.push_back(n%3);
		n /= 3;
	}
	return ret;
}

int main()
{
	ll q;	cin >> q;
	while (q--){
		ll n; cin >> n;
		vector <ll> ter;	ter = foo(n);	ter.push_back(0);	n = ter.size();

		while (1){
			ll ix = -1;
			for (ll i = 0; i < n; i ++)	if (ter[i] == 2)	ix = i;
			if (ix == -1)	break;
			for (ll i = 0; i <= ix; i ++)	ter[i] = 0;
			ter[ix + 1] += 1;
		}

		ll res = 0, val = 1;
		for (ll i = 0; i < n; i ++){
			res += ter[i] * val;
			val *= 3;
		}
		cout << res << "\n";
	}
}