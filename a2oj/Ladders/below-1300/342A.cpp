// 1 2 3 4 5 6 7

// 1 2 4
// 1 2 6
// 1 3 6 

using namespace std;
#include <bits/stdc++.h>
int main()
{
	int p = count(a, a + n, 1);
	int q = count(a, a + n, 2);
	int r = count(a, a + n, 4);
	int s = count(a, a + n, 6);
	int t = count(a, a + n, 3);
	if (p + q + r + s + t != n)
	{
		cout << - 1 << endl;
		return 0;
	}
	for (int i = 0; i < r; i++)
	{
		cout << "1 2 4" << endl;
		p -= 1;	q -= 1; r -= 1;
	}
	for (int i = 0; i < t; i++)
	{
		cout << "1 3 6" << endl;
		p -= 1; t -= 1; s -= 1;
	}
	for (int i = 0; i < (n/3 - r - t); i++)
	{
		cout << "1 2 6" << endl;
		p -= 1; q -= 1; s -= 1;
	}


}