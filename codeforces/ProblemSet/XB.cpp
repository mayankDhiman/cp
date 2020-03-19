#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m, a;  cin >> n >> m >> a;
    ll nn, mm;
    if (n % a == 0){
        nn = n;
    }
    else{
       nn = ((n / a) + 1) * a; 
    }
    if (m % a == 0){
        mm = m;
    }
    else{
        mm = ((m / a) + 1) * a;
    }
    cout << (nn/a) * (mm/a)<< "\n";
}