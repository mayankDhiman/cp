#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;   cin >> n;   vector <ll> a(n);
    for (ll i = 0; i < n; i ++) cin >> a[i];    sort(a.begin(), a.end());
    if ( (a[n - 1] <= accumulate(a.begin(), a.end() - 1, 0*1ll)) && (accumulate(a.begin(), a.end(), 0*1ll) % 2 == 0) ){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}