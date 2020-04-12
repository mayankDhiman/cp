#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll x, y, z;
    cin >> x >> y >> z;
    swap(x, y);
    swap(x, z);
    cout << x << " " << y << " " << z << " " << "\n";
    return 0;
}
