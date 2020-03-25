#include <bits/stdc++.h>

using namespace std;

int main()
{
	int sm = 0, n = 3;
	int a[3][3];	for (int i = 0; i < n; i ++)	for (int j = 0; j < n; j ++){
			cin >> a[i][j];
			sm += a[i][j];	
	}

	int ec = sm/2;
	a[0][0] = ec - a[0][1] - a[0][2];
	a[1][1] = ec - a[1][0] - a[1][2];
	a[2][2] = ec - a[2][0] - a[2][1];

	for (int i = 0; i < n; i ++)
	{
		for (int j = 0; j < n; j ++){
			cout << a[i][j];
			if (j != n - 1){
				cout << " ";
			}
		}
		cout << endl;
	}

}