// v >= 4
// v >= 5
// v <= 8

// v >= 2
// v >= 3
// v < 3

using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n, m; cin >> n >> m;
	int a[n]; for (int i = 0; i < n; i++)	cin >> a[i];
	int b[m]; for (int i = 0; i < m; i++)	cin >> b[i];
	int l = *min_element(a, a + n);
	int q = *max_element(a, a + n);
	int p = *min_element(b, b + m);
	bool ok = 0;
	int res;
	for (res = 1; res <= 110; res++)
	{
		if (res >= 2*l && res >= q && res < p)
		{
			ok = 1;
			break;
		}
	}
	if (ok)
		cout << res << endl;
	else
		cout << -1 << endl;
}