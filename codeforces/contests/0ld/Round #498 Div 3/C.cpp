/* CodeSlayer612 */
// 612

using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vll vector<ll>
#define debug(x) cout << (#x) <<  " is " << (x) << endl;
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define pb push_back

int main()
{
	ll n; cin >> n;
	ll a[n], a_rev[n], Sa1[n], Sa2[n]; 

	for (ll i = 0; i < n; i++)	cin >> a[i];
	for (ll i = 0; i < n; i++)  a_rev[i] = a[n - 1 - i];	
	    
    Sa1[0] = a[0];
	for (ll i = 1; i < n; i++) Sa1[i] = Sa1[i - 1] + a[i];

	Sa2[0] = a_rev[0];
	for (ll i = 1; i < n; i++) Sa2[i] = Sa2[i - 1] + a_rev[i];


	ll res = 0;
	for (ll i = 0; i < n; i++)
	{
		if (!binary_search(Sa2, Sa2 + n - i - 1, Sa1[i]))
			continue;
		else
			res = Sa1[i];
	}


    cout << res << "\n";

	return 0;
}