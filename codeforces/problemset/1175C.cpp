#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt;  cin  >> tt;
    while(tt --)
    {
        ll n, k;    cin >> n >> k;
        vector <ll> a(n);   for (ll i = 0; i < n; i ++) cin >> a[i];
        if (k == 0){
            cout << a[0] << "\n";
            continue;
        }
        ll mn = *min_element(a.begin(), a.end());
        ll mx = *max_element(a.begin(), a.end());
        cout << mn + (mx - mn)/2 << "\n";
    }
}
