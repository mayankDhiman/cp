// n - m >= m - 1
// m <= (n + 1)/2 

using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	int c[1001];
	for (int i = 0; i < 1001; i++)	c[i] = 0;
	for (int i = 0; i < n; i++)
	{
		int t; cin >> t;
		c[t] += 1;
	}	
	bool ok = 1;
	for (int i = 0; i < 1001; i++)
		if (!(c[i] <= (n + 1)/2))
			ok = 0;
	if (ok)	cout << "YES\n";
	else cout << "NO\n"; 	
}