// x + y < 1
// x + y % 10 != 0
using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main()
{
	ll x, y, k, n; cin >> y >> k >> n;
	bool ok = 0;
	for (ll s = k; s <= n; s += k)
	{
		if (s - y < 1)
			continue;
		else
		{
			cout << (s - y) << " ";
			ok = 1;			
		}	 
	}
	if (!ok)
		cout << - 1;
	cout << "\n";
}