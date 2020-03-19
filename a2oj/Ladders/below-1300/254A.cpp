using namespace std;
#include <bits/stdc++.h>

int n;
int a[1000000], p[1000000];
int main()
{
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
	cin >> n;
	// ios_base::sync_with_stdio(0);	cin.tie(0);		cout.tie(0);
	for (int i = 0; i < 2*n; i++)
	{
		cin >> a[i];
		p[i] = i;
	}
	sort(p, p + 2*n,[](int x, int y)
		{
			return (a[x] < a[y]);
		});
	bool ok = 1;
	for (int i = 0; i < 2*n - 1; i += 2)
		if (a[p[i]] != a[p[i + 1]])
			ok = 0;
	if (ok)
		for (int i = 0; i < 2*n - 1; i += 2)
			cout << p[i] + 1 << " " << p[i + 1] + 1 << endl;
	else 
		cout << "-1\n";			

}