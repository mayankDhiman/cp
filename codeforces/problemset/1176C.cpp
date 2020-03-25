#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;   cin >> n;
    vector <ll> a(n);   for (ll i = 0; i < n; i ++) cin >> a[i];
    map <ll, ll> id = {{4, 1}, {8, 2}, {15, 3}, {16, 4}, {23, 5}, {42, 6}};
    vector <ll> cnt(7, 0);
    for (ll i = 0; i < n; i ++)
    {
        if (a[i] == 4){
            cnt[id[a[i]]] += 1;
        }
        else{
            if (cnt[id[a[i]] - 1]){
                cnt[id[a[i]]] += 1;           
                cnt[id[a[i]] - 1] -= 1;
            } 
        }
    }

    cout << n - 6*cnt[6] << "\n";
 
}