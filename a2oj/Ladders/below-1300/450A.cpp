using namespace std;

#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
	int n, m; cin >> n >> m;
	map <int, int> candy; 
	for (int i = 1; i <= n; i ++)
	{
		int t; cin >> t;
		candy[i] = t;
	}
	vector<int> v; for (int i = 1; i <= n; i ++)	v.push_back(i);
	int x = 5;
	while(v.size() != 1)
	{
		if (candy[v[0]] - m <= 0)	v.erase(v.begin());
		else
		{
			candy[v[0]] -= m;
			int t = v[0];
			v.erase(v.begin());
			v.push_back(t);
		}
	}
	cout << v[0];
	return 0;
}