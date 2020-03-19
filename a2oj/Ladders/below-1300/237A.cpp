using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	vector<pair<int, int>> a;
	for (int i = 0; i < n; i++)
	{
		int t1, t2;	cin >> t1 >> t2;
		a.push_back(make_pair(t1, t2));
	}
	sort(a.begin(), a.end(), [](auto x, auto y){
		return ((x.first < y.first) or (x.first == y.first && x.second < y.second));
	});
	int l = 0, r = 0, res = INT_MIN;
	while (l < n)
	{
		while(r < n && a[r] == a[l])
			r += 1;
		res = max(res, r - l);
		l = r;
	}
	cout << res << endl;
}