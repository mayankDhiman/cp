#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    double n, m, sm = 0;    cin >> n >> m;
    vector <double> a(n);   for (ll i = 0; i < n; i ++){
            cin >> a[i];    sm += a[i];
    }
    sort(a.begin(), a.end(), greater <double> ());
    if (a[m - 1] >=  (1/(4*m)) * sm)
            cout << "Yes\n";
    else 
            cout << "No\n";
}
