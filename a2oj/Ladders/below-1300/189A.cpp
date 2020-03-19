// ax + by + cz = n

using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n, a, b, c;	cin >> n >> a >> b >> c;
	vector<int> r;
	for (double x = 0; x < n + 1; x ++)
	{
		for (double y = 0; y < n + 1; y++)
		{
			double z = (n - a*x - b*y)/c;
			if ((-1 < z) && (z < n + 1) && ((z - floor(z)) == 0))
			{
				r.push_back(x + y + z);
			}
		}
	}
	cout << *max_element(r.begin(), r.end()) << "\n";
}