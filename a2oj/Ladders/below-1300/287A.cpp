using namespace std;
#include <bits/stdc++.h>
int main()
{
	char a[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			cin >> a[i][j];
	bool ok = 0;	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int r = (a[i][j] == '#') + (a[i + 1][j + 1] == '#') + (a[i + 1][j] == '#') + (a[i][j + 1] == '#');
			if (r == 3 || r == 4 || r == 0 || r == 1)
				ok = 1;
		}
	}
	if (ok)	cout << "YES\n";
	else	cout << "NO\n";
	return 0;

}