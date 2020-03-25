#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a, b, c;
vector <ll> cache(5000, -1);

ll dp(ll nn)
{
    cout << nn << "\n";
    if (nn == 0){
        return 0;
    }
    if (nn < min(min(a, b), c)){
        return 1;
    }
    ll ans1 = LLONG_MIN, ans2 = LLONG_MIN, ans3 = LLONG_MIN;
    if (nn >= a){
        ans1 = 1 + dp(nn - a);
    }
    if (nn >= b){
        ans2 = 1 + dp(nn - b);
    }
    if (nn >= c){
        ans3 = 1 + dp(nn - c);
    }
    if (cache[nn] != -1)
        return cache[nn];
    return cache[nn] = max(max(ans1, ans2), ans3);
}

int main()
{
    cin >> n >> a >> b >> c;
    ll res = dp(n);
}