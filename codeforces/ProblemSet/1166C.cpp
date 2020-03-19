// 2 3 5

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;   cin >> n;
    vector <ll> a(n);   
    for (ll i = 0; i < n; i ++){
        cin >> a[i];
        a[i] = abs(a[i]);
    } 
    sort(a.begin(), a.end());
    ll res = 0;
    for (ll j = 0; j < n; j++)
    {
        ll i = upper_bound(a.begin() + j + 1, a.end(), 2*a[j]) - a.begin();
        // cout << i << "\n";
        res += i - j - 1;
        // ll j = lower_bound(a.begin(), a.begin() + i, 2*a[i]) - a.begin();
        // res += i - j;
    }
    cout << res << "\n";
}