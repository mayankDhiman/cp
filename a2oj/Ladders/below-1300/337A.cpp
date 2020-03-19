// 5 7 10 10 12 22

using namespace std;

#include <bits/stdc++.h>
int main()
{	
	int n, m; cin >> n >> m;
	int a[m]; for (int i = 0; i < m; i ++)	cin >> a[i];
	sort (a, a + m);
	vector<int> res;
	for (int i = 0; i <= m - n; i ++)
	{
		int t; t = a[i + n  - 1] - a[i];
		res.push_back(t);
	}
	cout << *min_element(res.begin(), res.end()) << endl;
}