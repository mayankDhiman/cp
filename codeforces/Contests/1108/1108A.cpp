using namespace std;
#include <bits/stdc++.h>
int main()
{
	int q; cin >> q;
	while (q--)
	{
		int l1, r1, l2, r2; cin >> l1 >> r1 >> l2 >> r2;
		int a = l1 , b = l2;
		if (a == b)
		{
			if (r1 - l1 >= 1)
				a += 1;
			else if (r2 - l2 >= 1)
				b += 1;
		}
		cout << a << " " << b << "\n";
	}
	return 0;
}