#include <bits/stdc++.h>
using namespace std;

int main()
{

	// ios_base::sync_with_stdio(0);	cin.tie(0);	  cout.tie(0);

	int t;	cin >> t;
	while(t --)
	{
		int n;	cin >> n;
		vector<long long> a(n);
		for (int i = 0; i < n; i ++)	cin >> a[i];

		sort(a.begin(), a.end());
		long long num = a[0] * a[n - 1];

		vector<long long> b;
		for (int i = 2; i * 1ll * i <= num; i ++)
		{
			if (num % i == 0)
			{
				b.push_back(i);
				if (i != num/i)
					b.push_back(num/i);
			}
		}
		sort(b.begin(), b.end());

		if (a != b)
			cout << "-1\n";
		else
			cout << num << "\n";
	}
}