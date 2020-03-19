// 

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll j, vector <ll> a){
    for (ll i = j + 1; i < a.size(); i++){
        a[i] = min(a[i], a[i - 1] - 1);
        if (a[i] == -1){
            return 0;
        }
    }
    return 1;
}

int main()
{
    ll t;   cin >> t;
    while(t --){
        ll n;   cin >> n;
        vector <ll> a(n);   for (ll i = 0; i < n; i ++)    cin >> a[i];
        bool ok = 1;
        for (ll i = 0; i < n; i ++){
            if (i > a[i]){
                ok = check(i - 1, a);
                break;
            }
        }
        if (ok) cout << "YES\n";
        else    cout << "NO\n";    
    }
}