#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m, q; cin >> n >> m >> q;
    ll g = __gcd(n, m);
    while (q --)
    {
        ll sx, sy, ex, ey; cin >> sx >> sy >> ex >> ey;
        ll rr1, rr2;
        if (sx == 1){
            ll gg = n/g; 
            rr1 = (sy - 1)/gg;
        }
        else{
            ll gg = m/g; 
            rr1 = (sy - 1)/gg;
        }

        if (ex == 1){
            ll gg = n/g;
            rr2 = (ey - 1)/gg;
        }
        else{
            ll gg = m/g;
            rr2 = (ey - 1)/gg;
        }
        if (rr1 == rr2){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
}