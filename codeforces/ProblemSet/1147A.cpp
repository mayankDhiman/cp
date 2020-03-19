#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, k;
vector <ll> a;

int main()
{
    cin >> n >> k;    
    pair <ll, ll> fl[n + 1];
    for (ll i = 0; i < n + 1; i ++){
        fl[i].first = 1e9;
        fl[i].second = -1e9;
    }
    for (ll i = 0; i < k; i ++)
    {
        ll xx;  cin >> xx;
        fl[xx].first = min(fl[xx].first, i);
        fl[xx].second = max(fl[xx].second, i);
    }

    ll rr = 0;
    for (ll i = 1; i < n + 1; i ++)
    {
        for (ll j = i - 1; j <= i + 1; j ++)
        {
            if (j < 1 || j > n )    continue;
            if (i != j){
                if (fl[i].first > fl[j].second) rr += 1;
            }
            else{
                if (fl[i].first == 1e9 && fl[i].second == -1e9){
                    rr += 1;
                }
            }
        }
    }

    cout << rr << "\n";
}











