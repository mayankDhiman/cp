using namespace std;

#include <bits/stdc++.h>

int main()
{
	int n;	cin >> n;
	vector < pair<int, string>> a(n), b(n);
	for (int i = 0; i < n; i++)
	{
		string t1; int t2;
		cin >> t1 >> t2;
		a[i] = make_pair(t2, t1);
	}

	map<string, int> cnt1;
	for (int i = 0; i < n; i++){
		cnt1[a[i].second] += a[i].first;
	}

	auto idx = max_element(cnt1.begin(), cnt1.end(), [](const auto &p1, const auto &p2){
		return p1.second < p2.second;
	});
	int m = idx->second;

	set <string> aa;
	for (auto i : cnt1){
		if (i.second == m){
			aa.insert(i.first);
		}
	}

	map<string, int> cnt;
	for (int i = 0; i < n; i++){
		cnt[a[i].second] += a[i].first;
		if (cnt[a[i].second] >= m){
			if (find(aa.begin(), aa.end(), a[i].second) != aa.end()){
				cout << a[i].second << "\n";
				return 0;				
			}
		}
	}
	return 0;
}