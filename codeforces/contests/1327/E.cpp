#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll modular(ll base, unsigned ll exp, unsigned ll mod)
{
    ll x = 1;
    ll power = base % mod;
    for (ll i = 0; i < sizeof(ll) * 8; i++) {
        ll least_sig_bit = 0x00000001 & (exp >> i);
        if (least_sig_bit)
            x = (x * power) % mod;
        power = (power * power) % mod;
    }
    return x;
}

int main(){
	ll n, res = 0;	cin >> n;
	ll mod = 998244353; 	
	for (ll i = 1; i <= n; i ++){
		if (i == n){
			cout << "10\n";
			continue;
		}
		res = (max(0ll, n - i + 1 - 2)%mod * 10 * modular(9,  2, mod) *  modular(10, max(n - i - 2, 0ll), mod))%mod;
		ll ex = 2*10*9*modular(10, max(0ll, n - i -  1), mod);		
		res = (res%mod + ex%mod)%mod;
		cout << (res % mod + mod)%mod << " ";
	}
	
	cout << "\n";
}