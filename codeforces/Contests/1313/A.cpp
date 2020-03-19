
#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector <ll> a(3);
set <string> dn;

ll dp(ll i, string r){
	if (i == 3){
		if ( (dn.find(r) != dn.end()) || r == "000"){
			return 0;
		}
		else{	
			cout << r[0] << " ";
			cout << r[0] - '0';
			cout << "\n";
			for (ll i = 0; i < 3; i ++){
				a[i] -= (r[i] - '0');
  			}	
			// for (auto i : a){
			// 	cout << i << " ";
			// }	cout << "\n";
			dn.insert(r);
			return 1;
		}
	}
	if (a[i] > 0){
		return dp(i + 1, r + "1") + dp(i + 1, r + "0");
	}
	else{
		return  dp(i + 1, r + "0");
	}
}


int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		dn.clear();
		vector <ll> a(3);	for (ll i = 0; i < 3; i ++)	cin >> a[i];	
		:: a = a;
		cout << dp(0, "") << "\n";
	}
}