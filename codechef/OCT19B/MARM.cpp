#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;   cin >> t;
    while(t --)
    {
        ll n, k;    cin >> n >> k;
        vector <ll> a(n);   for (ll i = 0; i < n; i ++) cin >> a[i];
        vector <ll> aa = a;
        ll xx = k/n, lm = k % n;

        for (ll i = 0; i < n; i ++)
        {
            ll hits = xx + (i < lm);
            if (i == n/2 && n % 2 == 1){
                if (hits != 0){
                    a[i] = 0;
                }
                continue;
            }
            if (i < n/2){
                if (hits == 0)  {}
                else if (hits % 3 == 1)  a[i] = aa[i] ^ aa[n - 1 - i];
                else if (hits % 3 == 2) a[i] = aa[n - 1 - i];
            }
            else{
                if (hits == 0)  {}
                else if (hits % 3 == 1)  a[i] = aa[n - 1 - i];
                else if (hits % 3 == 2) a[i] = aa[i] ^ aa[n - 1 - i];
            }
        }

        for (ll i = 0; i < n; i ++) cout << a[i] << " ";    cout << "\n";
    }
}