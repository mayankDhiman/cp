using namespace std;
#include <bits/stdc++.h>
int main()
{
	int s, n;	cin >> s >> n;
	vector <pair<int, int>> a;
	for (int i = 0; i < n; i++)
	{
		int t1, t2; 	cin >> t1 >> t2;
		a.push_back(make_pair(t1, t2));
	}
	sort(a.begin(), a.end(), [](auto x, auto y){
		return (x.first < y.first);
	});

	bool ok = 1;
	for (auto i : a){
		if (s > i.first){
			s += i.second;
		}
		else{
			ok = 0;
			break;
		}
	}

	if (ok)	cout << "YES\n";
	else 	cout << "NO\n";
	return 0;
}