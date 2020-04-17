#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;   cin >> t;
    while (t --) {
        ll n;   cin >> n;
        vector <ll> a(n), b(n); 
        for (ll i = 0; i < n; i ++) cin >> a[i];
        for (ll j = 0; j < n; j ++) cin >> b[j];
        bool ok = 1, ok1 = 0, ok2 = 0;
        for (ll i = 0; i < n; i ++) {
            ll df = b[i] - a[i];
            // cout << df << " " << ok1 << " " << ok2 << "\n";
            if ((df < 0) && (!ok1)){
                ok = 0;    break;
            }
            if ((df > 0) && (!ok2)){
                
                ok = 0;    break;
            }        
            if (a[i] == 1)  ok2 = 1;
            if (a[i] == -1) ok1 = 1;
        }
        if (ok) cout << "YES\n";
        else    cout << "NO\n";
    }
	return 0;
        
}

