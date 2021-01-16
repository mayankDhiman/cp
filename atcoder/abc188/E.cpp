#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, c;
map < ll, ll > diff;

int main(){
    cin >> n >> c;
    for (int i = 0; i < n; i ++){
        ll a, b, c;
        cin >> a >> b >> c;
        diff[a] += c;
        diff[b + 1] -= c;
    }
    ll curr = 0, result = 0;
    for (map <ll, ll > :: iterator it = diff.begin(); it != diff.end(); it++){
        auto iy = it;
        iy ++;
        curr += it -> second;
        ll range = (iy->first - it->first);
        result += (curr < c ? curr : c) * range;
    }
    cout << result << "\n";
}

