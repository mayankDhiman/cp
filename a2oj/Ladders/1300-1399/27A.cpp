#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;	cin >> n;

	bool b[3001];	for (int i = 0; i < 3001; i++)	b[i] = false;
	for (int i = 0; i < n; i ++)
	{
		int t;	cin >> t;
		b[t - 1] = true;
	}

	int res = 0;
	for (; res < 3001; res ++)
		if (!b[res])
			break;

	cout << res + 1 << "\n";	
}