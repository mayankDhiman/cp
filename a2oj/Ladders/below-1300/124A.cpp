using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n, a, b; cin >> n >> a >> b;
	int res = 0;
	for (int i = a; i < n; i ++)
		if ((n - i - 1) <= b)
			res += 1;
	cout << res << endl;
}