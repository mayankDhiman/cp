#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;    cin >> n >> m;
    ll a;
    if (m%n == 0){
        a = m/n;
    }
    else{
        cout << "-1\n";
        return 0;
    }
    ll ans = 0;
    while(a%2 == 0){
        a /= 2;
        ans += 1;
    }
    while(a%3 == 0){
        a /= 3;
        ans += 1;
    }
    if (a == 1)
    {
        cout << ans << "\n";
        return 0;
    }
    else{
        cout << "-1\n";
        return 0;
    }
}