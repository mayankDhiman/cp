using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n];	for (int i = 0; i < n; i++)	cin >> a[i];
	for (int i = 0; i < n; i ++) a[i] = 0-a[i];
	// for (int i = 0; i < n; i ++) cout << a[i] << " ";	
	sort(a, a + n);
	int res = 0;
	for (int i = 0; i < m; i ++)
	{
		if (a[n - 1 - i] < 0)
			break;
		res += a[n - 1 - i];
	}
	cout << res << endl;	
}