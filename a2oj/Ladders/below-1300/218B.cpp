using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n, m; cin >> n >> m;
	int a[m], b[m]; for (int i = 0; i < m; i ++)
	{
		cin >> a[i];
		b[i] = a[i];
	}	
	int min = 0;
	for (int i = 0; i < n; i ++)
	{
		int t1 = INT_MAX;
		int loc = -1;
		for (int j = 0; j < m; j++)
		{
			if (a[j] < t1 && a[j] > 0)
			{
				t1 = a[j];
				loc = j;
			}
		}
		a[loc] -= 1;
		min += t1;
	}

	int max = 0;
	for (int i = 0; i < n; i++)
	{
		int t = INT_MIN;
		int loc = -1;
		for (int j = 0; j < m; j++)
		{
			if (b[j] > t && b[j] > 0)
			{
				t = b[j];
				loc = j;
			}
		}
		max += t;
		b[loc] -= 1;
	}
	cout << max << " " << min << endl;
}