using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll t, sx, sy, ex, ey;
	cin >> t >> sx >> sy >> ex >> ey;
	string a; cin >> a;
	ll i;
	for (i = 0; i < a.size(); i++)
	{

		if (a[i] == 'N')
		{
			if (sy < ey)
				sy += 1;
		}
		else if (a[i] == 'S')
		{
			if (sy > ey)
				sy -= 1;
		}
		else if (a[i] == 'E')
		{
			if (sx < ex)
				sx += 1;
		}
		else if (a[i] == 'W')
		{
			if (sx > ex)
				sx -= 1;
		}

		if (sx == ex && sy == ey)
			break;
		// cout << sx << "\t" << sy << endl;
	}
	if (i < t)
	 	cout << i + 1 << endl;
	else 
		cout << -1 << endl;
}