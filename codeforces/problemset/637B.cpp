#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);   cin .tie(0);    cout.tie(0);
    ll n;   cin >> n;
    vector<string> a(n);    
    map <string, bool> mp;
    for (ll i = 0; i < n; i ++){
        cin >> a[n - 1 - i];
        mp[a[n - 1 - i]] = 0;
    }
    for (ll i = 0; i < n; i ++)
    {
        if (!mp[a[i]]){
            cout << a[i] << "\n";
            mp[a[i]] = 1;
        }
    }
}