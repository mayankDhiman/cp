using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	int a[n];	for (int i = 0; i < n; i++)	cin >> a[i];
	int c1 = 0, c2 = 0;
	bool ok = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 25)
			c1 += 1;
		else if (a[i] == 50)
		{
			if (c1 > 0)
			{
				c1 -= 1;
				c2 += 1;
			}
			else{
				ok = 0;
				break;
			}
		}
		else 
		{
			if (c1 > 0 && c2 > 0)
			{
				c1 -= 1;	c2 -= 1;
			}
			else if (c1 > 2)
			{
				c1 -= 3;
			}
			else{
				ok = 0;
				break;
			}
		}
	}
	if (ok)
		cout << "YES\n";
	else 
		cout << "NO\n";
}