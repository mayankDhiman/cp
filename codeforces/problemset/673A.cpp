#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;	cin >> n;
	int a[n];	for (int i = 0; i < n; i ++)	cin >> a[i];

	if (a[0] > 15){
		cout << "15\n";
		return 0;
	}

	for (int i = 1; i < n; i ++)
	{
		if (a[i] - a[i - 1] > 15){
			cout << (a[i - 1] + 15) << "\n";
			return 0;
		}
	}

	cout << min(a[n - 1] + 15, 90) << "\n";
	return 0;

}