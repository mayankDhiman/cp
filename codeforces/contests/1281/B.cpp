#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		string a, b;	cin >> a >> b;	ll n = a.size();
		vector <ll> pos(26, -1);	vector <char> aft(n, '_');
		for (ll i = 0; i < n; i ++){
			pos[a[i] - 'A'] = i;
		}
		char mn = a[n - 1];
		for (ll i = n - 2; i >= 0; i --){
			aft[i] = mn;
			mn = min(mn, a[i]);
		}
		for (ll i = 0; i < n - 1; i ++){
			if (aft[i] < a[i]){
				swap(a[i], a[pos[aft[i] - 'A']]);
				break;
			}
		}
		if (a < b){
			cout << a << "\n";
		}
		else{
			cout << "---\n";
		}
	}
}