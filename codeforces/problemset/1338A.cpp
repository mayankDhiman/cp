#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;   cin >> t;
    while (t--) {
        ll n;   cin >> n;
        vector <ll> a(n);   for (ll i = 0; i < n; i ++) cin >> a[i];
        ll ret = 0;
        for (ll i = 1; i < n; i ++) {
            if (a[i] < a[i - 1]){
                ll df = abs(a[i] - a[i - 1]);
                ret = max((long long)(log2(df) + 1), ret);
		a[i] = a[i - 1];
            }
        }
        cout << ret << "\n";
    }
	return 0;
}

