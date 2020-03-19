// (k - a*x)/(n - x) >= b 
// k - a*x >= n*b - x*b
// xb - ax >= nb - k 
// x > = nb - k / b - a 
// x > = k - nb / (a - b)  

// 1. 5 - 1
// 3. 5
// 4. 2
// 5. 

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll q;   cin >> q;
    while(q --)
    {
        ll k, n, a, b;  cin >> k >> n >> a >> b;
        if (n*b >= k){
            cout << "-1\n";
            continue;
        } 
        ll res = ceil(double(k - n*b)/double(a - b));
        cout << min(res - 1, n) << "\n";
    }
}