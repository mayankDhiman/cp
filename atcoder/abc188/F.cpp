#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    ll X, Y;
    cin >> X >> Y;
    /*
     * Go from Y to X
     * 1. if Y is 1 return (X - Y);
     * 2. if Y is odd return min(abs(X - Y), 2 + dp((Y + 1) / 2), 2 + dp((Y - 1)/2))
     * 3. if Y is even return min(abs(X - Y), 1 + dp(Y/2))
     */
    unordered_map < ll, ll > cache;
    function <ll(ll)> dp = [&] (ll Y){
        if (cache.count(Y))
            return cache[Y];
        if (Y == 1)
            return (X - Y);
        if (Y % 2 == 1)
            return cache[Y] = min({abs(X - Y), 2 + dp((Y + 1)/2), 2 + dp((Y - 1)/2)});
        else
            return cache[Y] = min({abs(X - Y), 1 + dp(Y/2)});
    };
    cout << dp(Y) << "\n";
}
