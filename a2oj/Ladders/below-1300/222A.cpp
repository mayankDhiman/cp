using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n,k; cin >> n >> k;
	int a[n]; for (int i = 0; i < n; i++)	cin >> a[i];
	int res = n - 1;
	while (res > 0)	
	{
		if (a[res - 1] != a[res])
			break;
		res -= 1;
	}
	// cout << res << endl;
	if (k - 1 < (res))
		cout << - 1 << endl;
	else
		cout << res << endl;
}			