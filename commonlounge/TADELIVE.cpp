#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	int a[n], b[n];
	for (int i = 0; i < n; i ++)	cin >> a[i];
	for (int i = 0; i < n; i ++)	cin >> b[i];

	long long res = 0;
	vector<pair<int, int>> d(n);
	for (int i = 0; i < n; i ++)	d[i] = make_pair(abs(a[i] - b[i]), i);
	sort(d.begin(), d.end(), greater<pair<int, int>>());
	for (int i = 0; i < n; i ++)
	{
		int idx = d[i].second;
		if (x > 0 && a[idx] > b[idx]){
			res += a[idx];
			x --;
		}
		else{
			res += b[idx];
			y --;
		}
	}

	cout << res << "\n";
}
