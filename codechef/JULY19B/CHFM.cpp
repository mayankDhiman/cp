#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;   cin >> t;
    while (t --)
    {
        ll n, sm = 0;   cin >> n;
        vector < ll> a(n);
        for (ll i = 0; i < n; i ++){
            cin >> a[i];
            sm += a[i];
        }
        if (n == 1){
            cout << "Impossible\n";
            continue;
        }
        double mn = double(sm)/double(n);
        bool ok = 0;
        for (ll i = 0; i < n; i ++){
            if ( double(sm - a[i])/double(n - 1) == mn){
                cout << i + 1 << "\n";
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << "Impossible\n";
    }
}