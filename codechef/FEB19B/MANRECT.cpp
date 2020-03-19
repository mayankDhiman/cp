using namespace std;
#include <bits/stdc++.h>
#define ll  long long
const ll N = 6;

int dis(int x, int y)
{
	int xu = 1, yu = 2, xl = 3, yl = 4;	
	int res1, res2;
	if (x >= xu && x <= xl)
		res1 = 0;
	else
		res1 = min(abs(x - xu), abs(x - xl));

	if (y >= yu && y <= yl)
		res2 = 0;
	else
		res2 = min(abs(y - yu), abs(y - yl));

	return (res1 + res2);
}

int main()
{
	// ll t;	cin >> t;
	// while(t--)
	// {
		ll k[4];
		pair<ll, ll> q[4] = {make_pair(0, 0), make_pair(0, N), make_pair(N, N), make_pair(N, 0)};
		for (int i = 0; i < 4; i++)
		{
			// cout << "Q " << q[i].first << " " << q[i].second << "\n" << flush;
			// cin >> k[i];
			k[i] = dis(q[i].first, q[i].second);
			// if (k[i] < 0)	return 0;
		}
		ll x = k[0], y = k[1], z = k[2], w = k[3];
		ll a = (x - y + z - w)/2, b = (x + y - z + w)/2, f = (3*w - x + y - z)/2, d = (3*z - 3*w + x - y)/2;
		cout << "A "<< b << " " << a << " " << (N - f) << " " << (N - d) << "\n"<< flush;
		// ll t;	cin >> t;
		// if (t < 0)	return 0;
	// }	 
}