#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		ll x;	cin >> x;
		string a;	cin >> a;	ll n = a.size();

		string b = a;
		ll ix = 0;
		while ( (b.size() <= x) && (ix < b.size() - 1) ){
			string nx = b.substr(ix + 1, b.size() - ix - 1);
			ll rep = (b[ix] - '0') - 1;
			while ( (rep --) && (b.size() <= x) ) 	b += nx;
			ix += 1;
		}

		// cout << b << "\n";
		ll i = 0, fr = n, pr = 0, mod = 1000000007, res = n;
		while(i < x){
			fr = (n%mod - i%mod - 1)%mod;
			n = (n%mod + ((fr%mod) * (b[i] - '0' - 1) )%mod ) % mod;
			i ++;
		}
		cout << (n%mod + mod)%mod << "\n";		
	}
}