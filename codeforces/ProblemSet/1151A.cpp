#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll chk(string x){
    ll ans = 0;
    string g = "ACTG";
    for (ll i = 0; i < 4; i ++)
        ans += min(abs(x[i] - g[i]), 26 - abs(x[i] - g[i]));
    return ans;
}

int main()
{
    ll  n;  cin >> n;
    string a;   cin >> a;
    ll res = LLONG_MAX;
    for (ll i = 0; i < n - 3; i ++){
        res = min(res, chk(a.substr(i, 4)));
    }
    cout << res << "\n";
}