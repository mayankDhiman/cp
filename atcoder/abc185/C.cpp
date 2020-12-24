#include <bits/stdc++.h>
using namespace std;

#define ll long long

long long L, cache[207][16];

ll dp(ll i, ll rem){
    if (rem == 0)
        return 1;
    if (L - i < rem)
        return 0;
    if (cache[i][rem] != -1)
        return cache[i][rem];
    ll result = 0;
    for (int j = i + 1; j < L; j ++)
        result += dp(j, rem - 1);
    return cache[i][rem] = result;
}

int main(){
    cin >> L;
    memset(cache, -1, sizeof cache);
    cout << dp(0, 11*1ll) << "\n";
}

