using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	int a[n];	for (int i = 0; i < n; i++)	cin >> a[i];

	int cst = INT_MAX, T = 1;
	for (int t = 1; t < 101; t++)
	{
		int c = 0;
		for (int i = 0; i < n; i++)
			c += min(min(abs(a[i] - (t + 1)), abs(a[i] - (t - 1))), abs(a[i] - t));
		if (c < cst){
			T = t;
			cst = c;
		}
	}

	cout << T << " " << cst << "\n";
}
