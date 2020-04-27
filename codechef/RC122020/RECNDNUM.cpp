#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll mod = 1e9 + 7;
ll foo(ll n){
	return (n%mod * (n - 1)%mod)%mod;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(); cout.tie(0);
	ll t; cin >> t;
	while (t --) {
		ll n, k; cin >> n >> k;
		if (n == 0){
			cout << foo(k) << "\n";	
			continue;
		} 
		ll zo = (n%mod + (k/2)%mod)%mod;
		ll st = foo(zo);
		ll en = foo(zo + 1);
		if (k % 2 == 1)
			cout << (en%mod - n%mod)%mod << "\n";
		else
			cout << (st%mod + n%mod)%mod << "\n";
		
	}
}
