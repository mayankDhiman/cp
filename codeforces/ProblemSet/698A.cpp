#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;   ll const N = 110;
vector <ll> a;  ll cache[N][4];


ll dp(ll ix, ll prv)
{
    if (ix == n){
        return 0;
    }

    if (cache[ix][prv] != -1)   return cache[ix][prv];

    if (ix == 0 or prv == 0)
    {
        if (a[ix] == 0){
            return cache[ix][prv] = 1 + dp(ix + 1, 0);
        } 
        if (a[ix] == 1){
            return cache[ix][prv] = min(1 + dp(ix + 1, 0), dp(ix + 1, 1));
        } 
        if (a[ix] == 2){
            return cache[ix][prv] = min(1 + dp(ix + 1, 0), dp(ix + 1, 2));
        }
        if (a[ix] == 3){
            return cache[ix][prv] = min(min(1 + dp(ix + 1, 0), dp(ix + 1, 2)), dp(ix + 1, 1));
        }
    }
    else if (prv == 2){
        if (a[ix] == 0){
            return cache[ix][prv] = (1 + dp(ix + 1, 0));
        } 
        if (a[ix] == 1){
            return cache[ix][prv] = min(1 + dp(ix + 1, 0), dp(ix + 1, 1));
        } 
        if (a[ix] == 2){
            return cache[ix][prv] = 1 + dp(ix + 1, 0);
        }
        if (a[ix] == 3){
            return cache[ix][prv] = min(1 + dp(ix + 1, 0), dp(ix + 1, 1));
        }
    }
    else if (prv == 1){
        ll a1, a2, a3, a4;
        if (a[ix] == 0){
            return cache[ix][prv] = (1 + dp(ix + 1, 0));
        } 
        if (a[ix] == 1){
            return cache[ix][prv] = 1 + dp(ix + 1, 0);
        } 
        if (a[ix] == 2){
            return cache[ix][prv] = min(1 + dp(ix + 1, 0), dp(ix + 1, 2));
        }
        if (a[ix] == 3){
            return cache[ix][prv] = min(dp(ix + 1, 2), 1 + dp(ix + 1, 0));
        }
    }
}

int main()
{
    memset(cache, -1, sizeof(cache));
    cin >> n;   vector <ll> aa(n);   for (ll i = 0; i < n; i ++) cin >> aa[i];  a = aa;
    cout << dp(0, 0) << "\n";
}
