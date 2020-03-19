using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n; cin >> n;
	int res = n;
	while(n --)
	{
		int a, b, c; cin >> a >> b >> c;
		int sum = a + b + c;
		if (sum < 2)	res -= 1;
	}
	cout << res << endl;
}