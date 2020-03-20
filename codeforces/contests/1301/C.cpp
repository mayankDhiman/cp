#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;


	while (t --)
	{
		ll n, m;	cin >> n >> m;
		ll res = n * (n + 1) / 2;

		ll ze = n - m;	ll gp = m + 1;
		ll p1 = ze / gp + 1, p2 = ze / gp;	

		res -= (p1 * (p1 + 1) / 2) * (ze % gp);
		res -= (p2 * (p2 + 1) / 2) * (gp - (ze % gp));


		cout << res << "\n";
	}
}