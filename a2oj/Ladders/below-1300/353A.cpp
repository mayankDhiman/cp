using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	vector<pair<int, int>> a(n);
	int s1 = 0, s2 = 0;
	for (int i = 0; i < n; i++)
	{
		int t1, t2; cin >> t1 >> t2;
		s1 += t1;	s2 += t2;
		a[i] = make_pair(t1, t2);
	}
	if (s1 % 2 == 0 && s2 % 2 == 0)
	{
		cout << 0 << "\n";	return 0;
	}
	if (s1 % 2 + s2 % 2 == 1)
	{
		cout << -1 << "\n";	return 0;
	}

	bool ok = 0;
	for (int i = 0; i < n; i++)
	{
		if ((a[i].first % 2 + a[i].second % 2) == 1)
			ok = 1;
	}
	if (ok)
		cout << "1\n";
	else
		cout << "-1\n";

}