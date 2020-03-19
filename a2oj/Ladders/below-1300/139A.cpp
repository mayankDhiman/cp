using namespace std;

#include <bits/stdc++.h>

int solve(int a[], int s)
{
	while (1)
	{
		for (int i = 0; i < 7; i ++)
		{
			s -= a[i];
			if (s <= 0) return i;
		}
	}
}

int main()
{
	int s; cin >> s;
	int a[7]; for (int i = 0; i < 7; i++) cin >> a[i];
	int res = solve (a, s);
	cout << res + 1 << endl;
}