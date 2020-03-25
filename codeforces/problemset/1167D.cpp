#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;   cin >> n;   string a;   cin >> a;
    ll cnt1 = 0, cnt2 = 0;
    for (ll i = 0; i < n; i ++)
    {
        if (a[i] == '('){
            cnt1 += 1;
            if (cnt1%2) cout << 0;
            else    cout << 1;
        }
        else{
            cnt2 += 1;
            if (cnt2%2) cout << 0;
            else cout << 1;
        }    
    }
    cout << "\n";
}