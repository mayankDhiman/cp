using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n; cin >> n;
	int a = 0;
	for (int i = 0; i < n; i++)
	{
		int t; cin >> t;
		a += t;
	}
	int res = 0;
	for (int i = 1; i <= 5; i ++)
		if ((a + i - 1) % (n + 1) != 0)		res += 1; 
	cout << res << endl;
}