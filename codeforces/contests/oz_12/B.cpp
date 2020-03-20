#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	// vector < vector <ll> > loc(2,  vector <ll> (0) );
	vector <ll> loc[2];
	string a;	cin >> a;
	for (ll i = 0; i < a.size(); i ++){
		if (a[i] == '('){
			loc[0].push_back(i + 1);
		}
		else{
			loc[1].push_back(i + 1);
		}
	}

	sort(loc[0].begin(), loc[0].end());
	sort(loc[1].begin(), loc[1].end(), greater <ll> ());

	ll i = 0, result = 0;
	vector <vector <ll> > _r;

	while (1){
		if (i == loc[0].size() or i == loc[1].size()){
			break;
		}
		if (loc[0][i] >= loc[1][i]){
			break;
		}

		vector <ll> rr;
		while (loc[0][i] < loc[1][i] && (i < loc[0].size()) && (i < loc[1].size())){
			rr.push_back(loc[0][i]);
			rr.push_back(loc[1][i]);
			i += 1;
		}
		sort(rr.begin(), rr.end());
		_r.push_back(rr);
		result += 1;
	}


	cout << result << "\n";
	for (auto i : _r){
		cout << i.size() << "\n";
		for (auto j : i){
			cout << j << " ";
		}	cout << "\n";
	}
}