#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;

bool ok(vector<ll> ab)
{
    vector <bool> fl(n, 0);
    for (ll i = 0; i < n; i ++)
        if (ab[i] - 1 < n && ab[i] - 1 > -1)
            fl[ab[i] - 1] = 1;
    for (ll i = 0; i < n; i ++){
        if (!fl[i]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    cin  >> n;   
    vector <ll> a(n - 1);   for (ll i = 0; i < n - 1; i ++) cin >> a[i];   
    vector <ll> aa(n);
    for (ll i = 1; i < n; i ++)
        aa[i] = aa[i - 1] + a[i - 1];
    ll mn = *min_element(aa.begin(), aa.end());
    for (ll i = 0; i < n; i ++){
        aa[i] = aa[i] - mn;
    }
    vector <ll> ans(n);
    for (ll i = 0; i < n; i ++){
        ans[i] = 1 + aa[i]; 
    }
    if (ok(ans)){
        for (ll i = 0; i < n; i ++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    else{
        cout << "-1\n";
    }
}
