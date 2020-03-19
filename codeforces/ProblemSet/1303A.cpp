#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >>t;
	while(t--)
	{
		string a;	cin >> a;
		ll res = count(a.begin(), a.end(), '0');
		for (ll i = 0; i < a.size(); i ++){
			if (a[i] == '1'){
				break;
			}
			else{
				res -= 1;
			}
		}

		for (ll i = a.size() - 1; i >= 0; i --){
			if (a[i] == '1'){
				break;
			}
			else{
				res -= 1;
			}
		}

		cout << max(0*1ll, res) << "\n";
	}
}