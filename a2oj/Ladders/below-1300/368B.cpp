using namespace std;
#include <bits/stdc++.h>
int main()
{	
	const int N = 100000;
	bool c[N + 1];	memset(c, false, sizeof(c));
	int n, m; cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[n - i - 1];
	vector<int> d(n);
	int r = 0;
	for (int i = 0; i < n; i++)
	{
		if (!c[a[i]])
		{
			r += 1;
			c[a[i]] = 1;
		}
		d[i] = r;
	}
	while(m --)
	{
		int l;	cin >> l;	
		cout << d[n - l] << endl;
	}
}