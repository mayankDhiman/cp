#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MX = 100000, MN = -100000; 


int main()
{
    ll tt;  cin >> tt;
    while (tt --)
    {
        ll n;   cin >> n;
        ll x_mx = MX, x_mn = MN, y_mn = MN, y_mx = MX;
        for (ll i = 0; i < n; i ++)
        {
            ll xx_mx = MX, xx_mn = MN, yy_mx = MX, yy_mn = MN;
            ll a, b, c, d, e, f;
            cin >> a >> b >> c >> d >> e >> f;
            if (c == 0){
                xx_mn = a;
            }
            if (d == 0){
                yy_mx = b;
            }
            if (e == 0){
                xx_mx = a;
            } 
            if (f == 0){
                yy_mn = b;
            }
            x_mx = min(x_mx, xx_mx);
            x_mn = max(x_mn, xx_mn);
            y_mx = min(y_mx, yy_mx);
            y_mn = max(y_mn, yy_mn);
        }
        // cout << x_mn << " " << x_mx << " " << y_mn << " " << y_mx << "\n";
        if (x_mx < x_mn || y_mx < y_mn){
            cout << "0\n";
            continue;
        }
        cout << "1 " << x_mn << " " << y_mn << "\n";
    }
}