#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n;	cin >> n;
	vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];
	ll ste, ret = 0;	
	if (n % 2 == 0)	ste = 1;	else	ste = 2;
	for (ll st = 0; st < n; st ++) {
		ll sm = 0, cn = 0;
		for (ll i = st; i < n; i += 2) {
			sm += a[i];	cn += 1;
			if (cn == n/2)	break;
		}
		if (cn == n/2)
			ret = max(ret, sm);
	}
	for (ll st = n - 1; st >=  0; st --) {
		ll sm = 0, cn = 0;
		for (ll i = st; i >= 0; i -= 2) {
			sm += a[i];	cn += 1;
			if (cn == n/2)	break;
		}
		if (cn == n / 2)
			ret = max(ret, sm);
	}
	cout << ret << "\n";
}
