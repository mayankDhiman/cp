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
	ll a[n];
	for (ll i = 0; i < n; i ++)	
		cin >> a[i];

	for (ll i = 0; i < n; i ++)
	{
		if (a[i] % 2 == 0)
			cout << a[i] - 1 << " ";
		else
			cout << a[i] << " " ;

	}
}