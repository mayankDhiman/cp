using namespace std;
#include <bits/stdc++.h>

int slve(int n)
{
	int ans = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			ans += 1;
	return ans;	
}

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0); cout.tie(0);
	// freopen("input.txt", "rt", stdin);
	// freopen("output.txt", "wt", stdout);
	int a, b, c; cin >> a >> b >> c;
	int res = 0;	vector<char> v;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			for (int k = 1; k <= c; k++)
			{
				cout << i << " " << j << " " << k << endl;
				v.push_back(i * j * k);
				// res += slve(i * j * k);
			}
		}
	}
	for (int i = 0; i < v.size(); i ++)
		res += slve(v[i]);
	// cout << res << endl;
}