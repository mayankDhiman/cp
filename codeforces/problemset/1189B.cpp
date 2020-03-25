// 2 3 4

// 1 2 3 4 4

// 111222
// 1 5 6 7 8 4

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;

bool chk(vector <ll> aa)
{
    if (aa[0] >= aa[1] + aa[n - 1] or aa[n - 1] >= aa[n - 2] + aa[0]){
        return 0;
    }
    for (ll i = 1; i < n - 1; i ++){
        if (aa[i] >= aa[i - 1] + aa[i + 1]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    cin >> n;   vector <ll> a(n);   for (ll i = 0; i < n; i++)  cin >> a[i];
    sort(a.begin(), a.end());
    swap(a[n - 1], a[n - 2]);
    if (chk(a)){
        cout << "YES\n";
        for (ll i = 0; i < n; i ++) cout << a[i] << " ";
        cout << "\n";
    }
    else
        cout << "NO\n";
    return 0;
}