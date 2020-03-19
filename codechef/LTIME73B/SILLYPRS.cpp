#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll slv1(vector <ll> a, vector <ll> b, ll n)
{
    sort (a.begin(), a.end());
    sort (b.begin(), b.end());
    stack <ll> be, bo;
    for (ll i = 0; i < n; i ++)
    {
        if (b[i] % 2 == 0)
        {
            be.push(b[i]);
        }
        else{
            bo.push(b[i]);
        }
    }

    ll res = 0;
    for (ll i = 0; i < n; i ++)
    {
        if (be.empty()){
            res += floor(double(bo.top() + a[i])/double(2));
            bo.pop();
        }

        else if (bo.empty()){
            res += floor(double(be.top() + a[i])/double(2));
            be.pop();
        }

        else if (!be.empty() && !bo.empty())
        {
            if (a[i] % 2 == 0)
            {
                res += floor(double(be.top() + a[i])/double(2));
                be.pop();
            }
            else
            {
                res += floor(double(bo.top() + a[i])/double(2));
                bo.pop();
            }
        }

    }
    return res;

}

int main()
{
    int t;  cin >> t;

    while(t --)
    {
        ll n;   cin >> n;
        vector <ll> a(n), b(n);   for (ll i = 0; i < n; i++)  cin >> a[i];
        for (ll i = 0; i < n; i ++) cin >> b[i];
        ll res = max(slv1(a, b, n), slv1(b, a, n));
        cout << res << "\n";
    }

}





