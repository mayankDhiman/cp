// RGBRGBRGBRGB
using namespace std;
#include <bits/stdc++.h>

int solve(string a, string s)
{
	int ans = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (i % 3 == 0 && a[i] != s[0])
			ans += 1;
		if (i % 3 == 1 && a[i] != s[1])
			ans += 1;
		if (i % 3 == 2 && a[i] != s[2])
			ans += 1;
	}
	return ans;
}

int main()
{
	int n; cin >> n;
	string a; cin >> a;
	int res[6];
	vector<pair<string, int>> v;
	string t = "BGR";
	do
	{
		int res = solve(a, t);	v.push_back(make_pair(t, res));		
	}
	while
		(next_permutation(t.begin(), t.end()));

	// for (int i = 0; i < v.size(); i++)
	// 	cout << v[i].first << " " << v[i].second << endl;

	pair<string, int> ans = v[0];
	for (int i = 0; i < 6; i++)
	{
		if (v[i].second < ans.second)
			ans = v[i];
	}
	string s = ans.first;
	// cout << s << endl;
	cout << ans.second << endl;

	for (int i = 0; i < n; i++)
	{
		if (i % 3 == 0)
			cout << s[0];
		if (i % 3 == 1)
			cout << s[1];
		if (i % 3 == 2)
			cout << s[2];		
	}
	cout << endl;
}