// -2, 4, 5, 5, 6, 8

// -2, 8, 4, 6, 5, 5


// 1 2 4 8

// 1 8 2 4
// 4 2 8 1

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;   cin >> t;
    while (t --) {
        ll n;   cin >> n;
        vector <ll> a(n), ret;   for (ll i = 0; i < n; i ++) cin >> a[i];
        sort(a.begin(), a.end());
        for (ll i = 0; i < n/2; i ++){
            ret.push_back(a[i]);
            ret.push_back(a[n - 1 - i]);
        }
        if (n % 2 == 1) ret.push_back(a[n/2]);
        reverse(ret.begin(), ret.end());
        for (auto r : ret)  cout << r << " ";   cout << "\n";
    }
	return 0;
}

