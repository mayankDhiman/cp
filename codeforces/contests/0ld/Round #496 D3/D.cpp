

using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define debug(x) cout << (#x) <<  " is " << (x) << endl;
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define f(i, a, b, c) for(ll i = a; i < b; i += c)
#define pb push_back

int main()
{
	SPEED
	string a; cin >> a;
	ll n = a.length();
	ll z[n + 1];
	z[0] = 0;
	ll sum = 0, r;
	int fin[3] = {-1, -1, -1};
	fin[0] = 0;

	for (ll i = 1; i < n + 1; i ++ )
	{
		sum = sum + a[i - 1];
		r = sum % 3;
		//debug(r)
		z[i] = z[i - 1];
		if (fin[r] != -1)
			z[i] = max(z[i], z[fin[r]] + 1);
		fin[r] = i;
		//debug(z[i])

	}	

	//debug (z[n]);
	cout << z[n] << "\n";
	return 0;
}