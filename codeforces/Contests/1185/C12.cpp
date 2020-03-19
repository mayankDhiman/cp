#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
    ll n,  m;  cin >> n >> m;
    vector <ll> a(n);  for (ll i = 0; i < n; i ++)    cin >> a[i];

    ll sm = a[0]; vector <ll> res(n), cnt(101);
    for (ll i = 1; i < n; i ++)
    {
        cnt[a[i - 1]] += 1;
        sm += a[i]; ll sm1 = sm;
        if (sm1 <= m){
            continue;
        }
        for (ll j = 100; j >= 1; j --)
        {
            if (sm1 - cnt[j]*j > m){
                sm1 -= cnt[j]*j;
                res[i] += cnt[j];
            }
            else{
                res[i] += ceil(float(sm1 - m) / float(j));
                break;
            }
        }
    }
    for (ll i = 0; i < n; i ++)
    {
        if (i){
            cout << " " << res[i]; 
        }
        else{
            cout << res[i];
        }
    }
    cout << "\n";
    return 0;
}