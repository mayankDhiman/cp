#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, k;	cin >> n >> k;
	int a[n];	for (int i = 0; i < n; i ++)	cin >> a[i];

	if (k > 1){
		cout << "Yes\n";
		return 0;
	}

	int xx;	cin >> xx;

	a[find(a, a + n, 0) - a] = xx;

	
	for (int i = 0; i < n - 1; i ++)
	{
		if (a[i + 1] < a[i]){
			cout << "Yes\n";
			return 0;
		}
	}

	cout << "No\n";

	return 0;
}