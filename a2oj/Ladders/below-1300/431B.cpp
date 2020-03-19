using namespace std;
#include <bits/stdc++.h>
int main()
{
	int a[5][5];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> a[i][j];
	int p[] = {1, 2, 3, 4, 5};
	int sum = 0;
	do
	{
		sum = max(2 * (a[p[3]-1][p[4]-1] + a[p[4]-1][p[3]-1]) + 2 * (a[p[2]-1][p[3]-1] + a[p[3]-1][p[2]-1])
		 +  (a[p[0]-1][p[1]-1] + a[p[1]-1][p[0]-1]) + (a[p[1]-1][p[2]-1] + a[p[2]-1][p[1]-1]), sum); 		
	}while(next_permutation(p, p + 5));	
	cout << sum << "\n";
}

 