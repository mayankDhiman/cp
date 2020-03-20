

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
	ll n; cin >> n;
	ll a[n];
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	ll a1[n];
	for (ll i = 0; i < n; i++)
		a1[i] = a[i];
	sort (a, a + n);

	bool flag[n]; 
	for (ll i = 0; i < n; i++) flag[i] = 0;

	for (ll i = 0; i < n; i++)
	{
    	ll k = upper_bound(a + i, a + n, a1[i]) - a;
    	if (k == n || flag[k] == 1)
    		continue;
    	else
    	{
    		flag[k] = 1;
    		a[i]^=a[k]^=a[i]^=a[k];
    	}	 
	}

	ll count = 0;
	for (ll i = 0; i < n; i++)
	{
		if (a[i] > a1[i])
			count ++;
	}	

	cout << count << endl;

}