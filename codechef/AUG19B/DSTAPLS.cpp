#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll tt;  cin >> tt;
    while (tt --)
    {
        ll n, k;    cin >> n >> k;
        // k *= k;
        if ((n/k) % k == 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}