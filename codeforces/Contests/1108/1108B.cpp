using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	map<int, int> c;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		c[a[i]] += 1;
	}
	int r1 = *max_element(a, a + n), r2 = -1;
	for (auto i = c.begin(); i != c.end(); i++)
		if (r1 % i->first != 0 or i->second == 2)
			r2 = max(i->first, r2);
	cout << r1 << " " << r2 << endl;
}