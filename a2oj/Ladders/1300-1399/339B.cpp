using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll t = LLONG_MIN;
	ll n, m, res = 0, a;	cin >> n >> m;
	for (ll i = 0; i < m; i++)
	{	
		cin >> a;
		if (a < t)	res += 1;
		t = a;
	}
	cout << res*n + (a - 1) << endl;
}