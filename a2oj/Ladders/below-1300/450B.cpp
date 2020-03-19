using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);
	ll x, y, n, m = int(1e9) + 7;	cin >> x >> y >> n;
	ll a[6], t;
	a[0] = x;	a[1] = y;	a[2] = y - x;
	a[3] = -x; 	a[4] = -y;	a[5] = x - y;
	t = a[(n - 1) % 6];
	cout << (t%m + m)%m << endl;
}