using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n; cin >> n;
	int s = 0;	for (int i = 0; i < n; i++)
	{
		int t; cin >> t;
		s += t;
	}
	if (!(s % n))
		cout << n << endl;
	else
		cout << n - 1 << endl;
}