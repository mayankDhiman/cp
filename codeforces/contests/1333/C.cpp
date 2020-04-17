#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);       cin.tie(0);
    
    ll n;   cin >> n;
    vector <ll> b(n);   for (ll i = 0; i < n; i ++) cin >> b[i];
    vector <ll> a(n + 1);   for (ll i = 1; i < n + 1; i ++)     a[i] = a[i - 1] + b[i - 1];
    
    ll j = 0, res = 0;  set <ll> in;
    for (ll i = 0; i < n + 1; i ++) {
        while (j < n + 1) {
            if (in.find(a[j]) != in.end())  break;
            in.insert(a[j]);
            j += 1;
        }
        in.erase(a[i]);
        res += (j - i - 1);
    }
    cout << res << "\n";

}
