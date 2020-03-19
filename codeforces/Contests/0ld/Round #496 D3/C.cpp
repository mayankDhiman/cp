
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
	f(i, 0, n, 1) 
		cin >> a[i];     

	bool flag[n];
	f (i, 0, n, 1) flag[i] = 0; 	 
	vll :: iterator it;
	vll :: reverse_iterator rit;
	vll paired;

	sort (a, a + n);
	for (ll i = n - 1; i >= 0; i--)
	{	
		ll nxPow =  pow(2,floor(log2(2*( a[i] ))));
		ll target = nxPow - a[i];
		if (binary_search(a, a + i, target))
		{
			paired.pb(a[i]); paired.pb(target); 
		}
	}

	ll ans = 0;
	sort(paired.begin(), paired.end());
	for (ll i = 0; i < n; i++)
	{
		if (!binary_search(paired.begin(), paired.end(), a[i]))
		{
			ans ++;
		}
	}

	cout << ans << "\n";		
	return 0;
}