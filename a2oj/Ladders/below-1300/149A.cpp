using namespace std;

#include <bits/stdc++.h>
int main()
{
	int k; cin >> k;
	int a[12]; for (int i = 0; i < 12; i ++) cin >> a[i];
	sort (a, a + 12);
	int res = 0; int gr = 0;
	for (int i = 0; i < 12; i ++)
	{
		if (gr >= k)	break;
		gr += a[12 - 1 - i];
		res += 1;
	}
	if (gr >= k) cout << res << endl;
	else cout << -1 << endl;
	return 0;
}