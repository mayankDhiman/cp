#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);
	ll t;	cin >> t;

	while (t--)
	{
		ll n, k;	cin >> n >> k;
		string a;	cin >> a;
		vector <ll> lc;
		ll on = 1, fr;
		for (ll i = 0; i < n; i ++){
			if (on == -1){
				if (a[i] == '0'){
					lc.push_back(i);
				}
			}
			if ( (a[i] == '1') && (on == 1) ){
				on = -1;
				fr = i;
			}
		}
		for (ll i = 0; i < lc.size(); i++){
			if (lc[i] - fr <= k){
				if (fr < lc[i]){
					swap(a[fr], a[lc[i]]);
					k -= (lc[i] - fr);
					fr += 1;					
				}
			}
			else{
				swap(a[lc[i] - k], a[lc[i]]);
				break;
			}		
		}
	}
}