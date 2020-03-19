using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n, k;	cin >> n >> k;
	vector<pair<int, int>> a;
	for (int i = 0; i < n; i++)
	{
		int t1, t2;	cin >> t1 >> t2;
		a.push_back(make_pair(t1, t2));
	}
	sort(a.begin(), a.end(), [](auto x, auto y){
		return ((x.first > y.first) || (x.first == y.first && x.second < y.second));
	});
	int r1 = a[k - 1].first, r2 = a[k - 1].second;
	int res = 0;
	for (int i = 0; i < n; i ++)
		if (a[i].first == r1 && a[i].second == r2)
			res += 1;
	cout << res << endl;	
}