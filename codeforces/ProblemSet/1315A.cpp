#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		ll a, b, x, y;	cin >> a >> b >> x >> y;
		vector <ll> res(4);
		res[0] = b * x;
		res[1] = a * y;
		res[2] = b * (a - 1 - x);
		res[3] = a * (b - 1 - y);
		cout << *max_element(res.begin(), res.end()) << "\n";
	}
}