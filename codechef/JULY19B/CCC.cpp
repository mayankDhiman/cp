#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt;  cin >> tt;
    while(tt --)
    {
        ll n, z;    cin >> n >> z;
        vector <ll> a(n);   
        for (ll i = 0; i < n; i ++){
            cin >> a[i];
        } 
        sort(a.begin(), a.end());
        for (ll i = 0; i < n; i ++)
            a[i] *= (n - i);
        cout << *min_element(a.begin(), a.end()) << endl;
    }
    return 0;
}   