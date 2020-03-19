using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n, a, b;	cin >> n >> a >> b;
	int res = 0;
	for (int i = 1; i < n + 1; i++)
	{
		int frnt = (i - 1), bck = (n - i);
		if (!(frnt < a) && !(bck > b))
			res += 1;
	}
	cout << res << endl;
}