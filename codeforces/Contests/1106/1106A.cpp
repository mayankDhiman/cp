using namespace std;
#include <bits/stdc++.h>
int main()
{
	int m;	cin >> m;
	char a[m][m];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	int res = 0;
	for (int i = 1; i < m - 1; i ++)
	{
		for (int j = 1; j < m - 1; j++)
		{
			if (a[i][j] == 'X' && a[i-1][j-1] == 'X' && a[i-1][j+1] == 'X' && a[i+1][j-1] == 'X' && a[i+1][j+1] == 'X'){
				res += 1;				
			}
		}
	}
	cout << res << endl;			
}