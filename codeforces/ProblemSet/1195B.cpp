// x*(x + 1)/2 - (n - x) = k  

// x*(x + 1) + 2*x = 2*k + 2*n  

// x^2 + 3*x + (- 2*k - 2*n) = 0

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;    

int main()
{
    cin >> n >> k;
    ll c = -2*k - 2*n;
    ll r = -3 + sqrt(9 - 4*c);
    r /= 2;
    cout << (n - r) << "\n";
}