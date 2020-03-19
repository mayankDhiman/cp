#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;   cin >> t;

    while(t --){
        ll n, k;    cin >> n >> k;
        vector <ll> a(n);   for (ll i = 0; i < n; i++)  cin >> a[i];
        vector <ll> a1(n), a2(n);
        for (ll i = 0; i < n; i ++){
            if (a[i] % k == 0){
                a1[i] = a2[i] = 0;
                continue;
            }
            a1[i] = a[i] % k;
            a2[i] = k - (a[i] % k);
        }
        vector <ll> _a1(n + 1), _a2(n + 1);

        for (ll i = 1; i < n + 1; i ++){
            _a1[i] = _a1[i - 1] + a1[i - 1];
        }

        for (ll i =  n - 1; i >= 0; i --){
            _a2[i] = _a2[i + 1] + a2[i];
        }

        ll res = LLONG_MAX;
        for (ll i = 0; i < n + 1; i ++){
            if (_a1[i] -_a2[i] >= 0){
                res = min(res, _a1[i] - _a2[i]);
            }
        }

        cout << res << "\n";

    }
}