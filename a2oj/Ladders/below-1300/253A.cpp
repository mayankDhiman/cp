using namespace std;
#include <bits/stdc++.h>
int main()
{
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
	int n, m;	cin >> n >> m;
	if (n == m)
	{
		for (int i = 0; i < n; i++)
			cout << "GB";
	}
	else if (n > m)
	{
		for (int i = 0; i < m; i++)
			cout << "BG";
		for (int i = 0; i < (n - m); i++)
			cout << "B";
	}
	else if (m > n)
	{
		for (int i = 0; i < n; i++)
			cout << "GB";
		for (int i = 0; i < (m - n); i++)
			cout << "G";
	}
	cout << "\n";
}