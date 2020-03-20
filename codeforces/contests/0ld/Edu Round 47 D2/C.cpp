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

ll solver(ll pos, ll n)
{
	ll res = 0;
	for (ll i = 0; i < n; i ++)
		res += abs(i - pos);
	return res;
}


int main()
{
	SPEED 
	ll n,m; cin >> n >> m;
	ld ans1 = 0;
	ll solve1 = solver(0, n), solve2 = solver(n / 2, n); 
	for (ll i = 0; i < m; i++)
	{
		ll x,d; cin >> x >> d;
		ans1 += n * x;
		if (d >= 0)
			ans1 += solve1 * d;
        else
        	ans1 += solve2 * d;
	}

	ld ans = ans1 / n;
    cout << fixed << setprecision(15) << ans << endl;
	return 0;
}