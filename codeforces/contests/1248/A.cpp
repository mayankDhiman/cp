#include <bits/stdc++.h>
using namespace std;

#define ll long long 

ll n, m, mod = 1e9 + 7;
ll ch[int(1e5 + 1)]; 

ll dp(ll i) {
	if (i < 0) 	return 0;
	if (i == 0) 	return 1;
	if (ch[i] != -1) 	return ch[i];
	return ch[i] = (dp(i - 1)%mod + dp(i - 2)%mod)%mod;
}

int main() {
	cin >> n >> m;
	memset(ch, -1, sizeof ch);
	cout << ((2*dp(n))%mod + (2*dp(m))%mod - 2)%mod << "\n";
}

