#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <ll> cache(1e5 + 5, -1);

ll n, m;

ll slve(ll n)
{
    if (n <= 0 || n >= 2e4){
        return 1e9;
    }
    if (n == m){
        return 0;
    }
    ll &ans = cache[n];
    if (ans != -1){
        return ans;
    }
    ans = 1e9;
    ans = 1 + min(slve(n*2), slve(n - 1));
    return ans;
}

int main()
{
    cin >> n >> m;
    ll ans = slve(n);
    cout << ans << "\n";
}