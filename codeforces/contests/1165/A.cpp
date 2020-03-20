#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x, y;	cin >> n >> x >> y;
	string a;	cin >> a;

	int res = 0;
	for (int i = n - x; i < n; i ++)
	{
		if (i == (n - y - 1))
			res += abs(int(a[i] - '1'));
		else
			res += abs(int(a[i] - '0'));
	}

	cout << res << "\n";
}