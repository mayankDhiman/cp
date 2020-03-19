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
	ll n,k; cin >> n >> k; ll a[n], a1[n];
	for (ll i = 0; i < n; i ++) cin >> a[i];
	for (ll i = 0; i < n; i ++) a1[i] = a[i];
	sort (a1, a1 + n);
	
	vll max; vll :: iterator it;
	for (ll i = 0; i < k; i ++)
		max.pb(a1[n - i - 1]);


	ll sum = accumulate(max.begin(), max.end(), 0);  /*result1*/

	cout << sum << "\n";
	
	if (k == 1)
	{
		cout << n << "\n"; return 0; 
	}
	


	ll count1 = 0, count2 = 0;
	for (ll i = 0; i < n; i ++)
	{
		
		if (count1 == k - 1)
		{
			cout << n - i;
			break;
		}

		count2 ++;
		it = find(max.begin(), max.end(), a[i]) ;
		if ( it == max.end() )
			continue;
		else
		{
			count1 ++;
			cout << count2 << " ";
			count2 = 0;
			max.erase( find(max.begin(), max.end(), a[i]) );
		}
	}

}