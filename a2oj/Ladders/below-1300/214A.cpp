using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n, m;	cin >> n >> m;
	int a, b;
	int res = 0;
	for (a = 0; a < 1000; a++)
	{
		for (b = 0; b < 1000; b++)
		{
			if (a*a + b == n && a + b*b == m)
				res += 1;
		}
	}
	cout << res << endl;
}