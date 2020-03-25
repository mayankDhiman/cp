#include <bits/stdc++.h>

using namespace std;

int main()
{
	int d, sm;	cin >> d >> sm;
	vector<pair<int, int>> a(d);

	int mn = 0, mx = 0;
	for (int i = 0; i < d; i ++)
	{
		int t1, t2;	cin >> t1 >> t2;
		mn += t1;
		mx += t2;
		a[i] = make_pair(t1, t2);
	}
	if ((sm > mx) or (sm < mn)){
		cout << "NO\n";
		return 0;
	}

	int res[d], lft = sm - mn;
	for (int i = 0; i < d; i++){
		res[i] = a[i].first;
	}

	for (int i = 0; i < d; i++){
		if (lft <= 0){
			break;
		}
		res[i] = min(a[i].second, res[i] + lft);
		lft -= (res[i] - a[i].first); 
	}

	cout << "YES\n";
	for (int i = 0; i < d - 1; i++){
		cout << res[i] << " ";
	}
	cout << res[d - 1] << "\n";
}