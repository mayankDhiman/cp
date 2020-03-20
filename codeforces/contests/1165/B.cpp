// 4 
// 1 1 3 4

// 3 
// -1 1 1

// 5 
// -1 1 1 -1 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;	cin >> n;
	int a[n];	for (int i = 0; i < n; i ++)	cin >> a[i];

	sort(a, a + n);
	int k = 1, i = 0;
	while(i < n)
	{
		if (a[i] >= k)
			k += 1;
		i += 1;
	}
	cout << (k - 1) << "\n";
}