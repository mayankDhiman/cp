

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
	ll a[n][2];
	for (ll i = 0; i < n; i++)
		cin >> a[i][0] >> a[i][1];
	ll lead = max(a[0][0], a[0][1]);
	ll flag1 = 0;
	for (ll i = 1; i < n; i++)
	{
		if (min(a[i][0], a[i][1]) <= lead)
		{
			if (max(a[i][0], a[i][1]) > lead)
				lead = min(a[i][0], a[i][1]);
			else
			{
				lead = max(a[i][0], a[i][1]);
			}	
		}

		else
		{
			flag1 = 1;
			break;
		}

	}

	if (flag1 == 1)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}