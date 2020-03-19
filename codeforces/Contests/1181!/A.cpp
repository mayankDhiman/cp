#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll x, y, z; cin >> x >> y >> z;
	ll num = (x+y)/z;
	cout << num << " ";
	ll a1 = x%z;
	ll a2 = y%z;
	if (a1 + a2 < z) {
		cout << 0;
		return 0;
	}
	cout << min(z - a1, z - a2);
 
	return 0;
}
