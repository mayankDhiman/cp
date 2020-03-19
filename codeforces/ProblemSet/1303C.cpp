#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		string a;	cin >> a;
		set <char> adj[26];
		for (ll i = 0; i < a.size(); i ++){
			if (i == 0){
				adj[a[i] - 'a'].insert(a[i + 1]);
			}
			else if (i == a.size() - 1){
				adj[a[i] - 'a'].insert(a[i - 1]);
			}
			else{
				adj[a[i] - 'a'].insert(a[i + 1]);
				adj[a[i] - 'a'].insert(a[i - 1]);
			}
		}

		for (ll i = 0; i < 26; i ++){
			for (auto J : adj[i]){
				cout << J << " ";
			}	cout << "\n";
		}

		ll fr = a[0] - 'a';
		vector<bool> done(26, 0);	done[fr] = 1;
		vector <ll> res;	res.push_back(fr);
		bool yes = 1;
		ll curr = fr;

		for (auto i : res)	cout << i ;	cout << "\n";
		while (1){
			if (adj[curr].size() > 2){
				yes = 0;
				break;
			}
			bool ok = 1;
			for (auto j : adj[curr]){
				if ( !done[j - 'a'] ){
					res.push_back(j - 'a') ;
					curr = j - 'a';
					ok = 0;
					break;
				}
			}
			if (ok){
				break;
			}
			done[ res[res.size() - 1]  ] = 1;
			cout << "B\n";
			for (auto i : res)	cout << i ;	cout << "\n";


		}



		if (adj[res[res.size() - 1]].size() == 1){
			// if (*adj[res[res.size() - 1]].begin() == res[res.size() - 2]){
				yes = 1;
			// }
			// else{
			// 	yes =  0;
			// }
		}
		else{
			yes = 0;
		}


		if (!yes){
			cout << "NO\n";
		}
		else{
			cout << "YES\n";
			for (ll i = 0; i < 26; i ++){
				if (!done[i]){
					res.push_back(i);
				}
			}
			for (ll i = 0; i < res.size(); i ++){
				cout << char(res[i] + 'a');
			}	cout << "\n";
		}
	}
}
