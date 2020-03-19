#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt;  cin >> tt;
    while (tt --)
    {
        ll n, k, cnt = 0;    cin >> n >> k;
        vector <ll> ans;
        for (ll i = 0; i < n; i ++){
            ll a;
            cin >> a;
            if (a%2 == 1){
                cnt += 1;
                ans.push_back(i + 1);
            }
        }
        if (cnt < k){
            cout << "NO\n";
        }
        else{
            if ((cnt - k)%2 == 0){
                cout << "YES\n";
                for (ll i = 0; i < k - 1; i ++)
                    cout << ans[i] << " ";
                cout << n << "\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}