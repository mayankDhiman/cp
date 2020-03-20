#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 998244353;


int main()
{
	ll n;	cin >> n;
	ll a[n], b[n];
	for (int i = 0; i < n; i ++)	cin >> a[i];
	for (int i = 0; i < n; i ++)	cin >> b[i];

	ll aa[n];
	for (int i = 0; i < n; i ++){
		aa[i] = (n - i) * (i + 1) * a[i];
	}
	ll res = 0;
	sort(b, b + n, greater<ll>());
	sort(aa, aa + n);
	for (int i = 0; i < n; i ++){
		res = (res + (aa[i] % mod * b[i] % mod) % mod) % mod;		
	}	
	cout << res << "\n";

}