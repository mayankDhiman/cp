#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;   cin >> n;
    string a, an1, an2;   cin >> a;

    ll c0 = count(a.begin(), a.end(), '0'), c1 = count(a.begin(), a.end(), '1');
    if (c0 != c1){
        cout << "1\n";
        cout << a << "\n";
        return 0;
    }

    bool ct = 0;
    ll _c0 = 0, _c1 = 0, i;
    for (i = 0; i < n; i ++)
    {
        if (a[i] == '0'){
            _c0 += 1;
            c0 -= 1;
        }
        else
        {
            _c1 += 1;
            c1 -= 1;
        }
        // cout << a[i];
        an1 += a[i];
        if (c1 != c0 && _c1 != _c0){
            ct = 1;
            break;
        }
    }
    // cout << " ";
    for (ll j = i + 1; j < n; j ++){
        an2 += a[j];
        // cout << a[j];
    }

    if (ct)    cout << "2\n";
    else    cout << "1\n";
    cout << an1 << " " << an2 << "\n";

}