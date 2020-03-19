// 4 3
// x x + 2
// 200 e o
// 100 e e
 

using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n; cin >> n;
	map <int, int> c;
	while (n --)
	{
		int t; cin >> t;
		c[t] += 1;
	}
	// // cout << c[200] << "\t" << c[100] << endl;
	// if (c[200] == 1 and c[100] == 0)
	// 	cout << "NO" << endl;

	if (c[200] % 2 == 0 and c[100] % 2 == 0)
		cout << "YES" << endl;
	else if (c[200] % 2 == 1 and c[100] % 2 == 0 and c[100] >= 2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}