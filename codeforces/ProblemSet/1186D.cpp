//  4   5
//  1   2
// -3  -2
// -4  -3


// 5 -7

// -7, -6
// 3, 4
// -1, 0
// 2, 3
// 1, 2

// 5   8

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;   cin >> n;
    vector < pair<ll, bool> > ap;
    ll sp = 0;
    for (ll i = 0; i < n; i ++){
        double x;
        cin >> x;
        if (x == floor(x))
            ap.push_back({floor(x), 0});
        else
            ap.push_back({floor(x), 1});
        sp += floor(x);
    }

    ll j = 0;
    while(sp != 0){
        if (ap[j].second){
            ap[j].first += 1;
            sp += 1;
        }
        j ++;
    }
    for (ll i = 0; i < n; i ++){
        cout << ap[i].first << "\n";
    }
}