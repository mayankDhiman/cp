

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
	ll n,m; cin >> n >> m;
	vll c,a;
	for (ll i = 0; i < n; i++)
	{
		ll temp; cin >> temp;
		c.pb(temp);
	}
	for (ll i = 0; i < m; i++)
	{
		ll temp; cin >> temp;
		a.pb(temp);
	}


    
    ll count = 0;
	for (ll i = 0; i < n; i++)
	{
		if (a.size() == 0)
			break;
		if (c[i] <= a[0])
		{
			count ++;
			a.erase(a.begin());
		}
	}	

	cout << count;
	return 0;
}