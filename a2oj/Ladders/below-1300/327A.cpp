using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	int a[n];	for (int i = 0; i < n; i++)	cin >> a[i];
	if (accumulate(a, a + n, 0) == n)
	{
		cout << n - 1 << "\n";
		return 0;
	}
	int b[n];
	for (int i = 0; i < n; i++)
		if(a[i])	b[i] = -1;
		else	b[i] = 1;
	int res = 0, curr = 0;
	for (int i = 0; i < n; i++)
	{	
		curr = max(curr + b[i], 0);
		res = max(curr, res);		
	}
	cout << accumulate(a, a + n, 0) + res << "\n";
}

