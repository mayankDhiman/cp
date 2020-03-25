#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, s;	cin >> n >> s;
	vector <pair<int, int>> a;
	for (int i = 0; i < n; i ++)
	{
		int t1, t2;	cin >> t1 >> t2;
		a.push_back(make_pair(t1, t2));
	}

	sort (a.begin(), a.end());	reverse(a.begin(), a.end());
	int t = s - a.begin() -> first;
	if (t < a.begin() -> second)	t = a.begin() -> second;
	for (int i = 1; i < n; i ++){
		t += a[i - 1].first - a[i].first;
		t = max(a[i].second, t);
	}
	t += (a[n - 1].first);

	cout << t << "\n";
}