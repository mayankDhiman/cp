using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n; cin >> n;
	int a[n]; for (int i = 0; i < n; i ++)	cin >> a[i];
	int d[n];
	d[0] = abs(a[0] - a[n - 1]);
	for (int i = 1; i < n; i ++)
		d[i] = abs(a[i] - a[i - 1]);	
	int res = min_element(d, d + n) - d;
	if (res == 0)
	{
		cout << res + n << " " << res + 1 << endl;
	}
	else
	{
		cout << res << " " << res + 1 << endl;
	}
}