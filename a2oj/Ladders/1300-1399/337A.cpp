#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;	cin >> n >> m;	int a[m];
	for (int i = 0; i < m; i ++)
		cin >> a[i];

	int ans = INT_MAX;
	sort(a, a + m);
	for (int i = 0; i <= (m - n); i ++)
		ans = min(a[i + n - 1] - a[i], ans);

	cout << ans << "\n";
}