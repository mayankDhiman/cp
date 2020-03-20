#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;   cin >> t;
    while (t --){
        ll n, zc = 0, sm = 0;   cin >> n;   
        for (ll i = 0; i < n; i ++){
            ll x;   cin >> x;
            if (x == 0) zc += 1;
            else    sm += x;
        } 
        ll res = 0;
        if (sm == 0){
            res += 1;
            if (zc > 0){
                zc -= 1; 
            }
            else{
            }
        }
        res += zc;
        if (res + sm == 0){
            res += 1;
        }
        cout << res << "\n";
    }
}