#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;   cin >> t;
    while(t --)
    {
        ll n, m, q; cin >> n >> m >> q;
        ll X = 0, Y = 0;
        map <ll, ll> cx, cy;
        while(q --)
        {
            ll x, y;    cin >> x >> y;
            cx[x] += 1;
            cy[y] += 1;
            if (cx[x] % 2 == 0) X -= 1; else    X += 1;
            if (cy[y] % 2 == 0) Y -= 1; else    Y += 1; 
        }
        cout << X*m + Y*(n - 2*X) << endl;  
    }
}