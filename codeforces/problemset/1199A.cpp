#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, x, y; cin >> n >> x >> y;
    vector <ll> a(n);   for (ll i = 0; i < n; i ++) cin >> a[i];
    for (ll i = 0; i < n; i ++)
    {
        bool ok = 1;
        ll k = i;
        while(k <= i + y && k < n){
            if (a[k] < a[i])   ok = 0;
            k ++;
        }
        k = i;
        while(k >= i - x && k > 0){
            if (a[k] < a[i])   ok = 0;
            k --;
        }
        if (ok){
            cout << i + 1 << "\n";
            return 0;
        }
    }
}