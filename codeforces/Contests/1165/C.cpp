#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;	cin >> n;
	string a;	cin >> a;

	string res;
	for (int i = 0; i < n; i ++)
	{
		if (res.size() % 2 == 0)
			res += a[i];
		else
		{
			if (res[res.size() - 1] != a[i])
				res += a[i];
		}
	}
	if (res.size() % 2 == 1)
		res.erase(res.end() - 1);

	cout << abs(int(a.size() - res.size())) << "\n";
	cout << res << "\n";
}