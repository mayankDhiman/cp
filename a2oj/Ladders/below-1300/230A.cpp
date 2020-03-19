using namespace std;

#include <bits/stdc++.h>
int main()
{
	int s, n; cin >> s >> n;
	vector<pair<int, int>> a;
	for (int i = 0; i < n; i ++)
	{
		int t1, t2; cin >> t1 >> t2;
		a.push_back(make_pair(t1, t2));
	}
	sort (a.begin(), a.end(), [](const pair<int, int> x, const pair<int, int> y){return (x.first < y.first);});
	while (n --)
	{
		if (s > (a.begin()->first))
		{
			s += (a.begin()-> second);
			a.erase(a.begin());
		}
		else
			break;
	}
	if (!a.size()) cout << "YES" << endl;
	else cout << "NO" << endl;
}