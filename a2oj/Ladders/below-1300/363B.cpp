// 0 to 4
// 0 to (n - k)

// using namespace std;
// #include <bits/stdc++.h>
// int main()
// {
// 	int n, k; cin >> n >> k;
// 	int a[n];	for (int i = 0; i < n; i++)	cin >> a[i];
// 	int t, sum;
// 	minSum = sum = accumulate(a, a + k, 0);
// 	int r = 1;
// 	for (int i = 1; i < n - k + 1; i++)
// 	{
// 		sum -= a[i - 1];	sum += a[k + i - 1];
// 		if (sum < minSum)
// 		{
// 			r = i + 1;
// 			minSum = sum;
// 		}
// 	}
// 	cout << r << "\n";
// }

using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n, k; cin >> n >> k;
	int a[n + 1], s[n + 1];	s[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	int t = s[k] - s[0];
	int res = 1;
	for (int i = k; i <= n; i++)
	{
		if (s[i] - s[i - k] < t)
		{
			t = s[i] - s[i - k];
			res = i - k + 1;
		}
	}
	cout << res << endl;	
}