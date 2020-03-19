#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;   cin >> n;
    bool o1 = 0, o2 = 0;
    vector <ll> a(n);
    for (ll i = 0; i < n; i ++){
        cin >> a[i];
        if (a[i]%2==0)  o1 = 1;
        else    o2 = 1;
    }
    if (o1 && o2){
        sort(a.begin(), a.end());
    }
    for (ll i = 0; i < n - 1; i ++) 
    cout << a[i] << " ";
    cout << a[n - 1] << "\n";
}