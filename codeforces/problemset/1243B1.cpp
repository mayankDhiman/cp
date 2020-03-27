#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --){
		ll n;	cin >> n;	string a, b;	cin >> a >> b;
		if (a == b){
			cout << "YES\n";
			continue;
		}
		vector <ll> diff;
		for (ll i = 0; i < n; i ++){
			if (a[i] != b[i])	diff.push_back(i);
		}
		if (diff.size() == 2){
			if ((a[diff[0]] == a[diff[1]]) && (b[diff[0]] == b[diff[1]])){
				cout << "YES\n";
			}	
			else{
				cout << "NO\n";
			}
		}
		else{
			cout << "NO\n";
		}
	}
}
