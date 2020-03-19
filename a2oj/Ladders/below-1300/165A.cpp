using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n; cin >> n;
	multimap<int, int> cord;
	while (n --)
	{
		int t1, t2;
		cin >> t1 >> t2; 
		cord.insert(pair<int, int> (t1, t2));
	}

	bool f1, f2, f3, f4;
	int res = 0;
	for (auto j : cord)
	{
		f1 = f2 = f3 = f4 = false;
		for (auto i : cord)
		{
			if (i.first == j.first && i.second > j.second)	f1 = true;
			else if (i.first == j.first && i.second < j.second)	f2 = true;
			else if (i.first > j.first && i.second == j.second)	f3 = true;
			else if (i.first < j.first && i.second == j.second)	f4 = true;
		}
		if (f1 && f2 && f3 && f4)	res += 1;
	}
	cout << res << endl;
}	