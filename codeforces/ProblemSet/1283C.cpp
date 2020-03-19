#include <bits/stdc++.h>
using namespace std;

int main()
{
	ll n;	cin >> n;
	set <ll> giv, tak;
	for (ll i = 0; i < n; i ++){
		giv.insert(i + 1);
		tak.insert(i + 1);
	}

	for (ll i = 0; i < n; i ++){
		ll x;	cin >> x;
		if (!x){
			giv.erase(i + 1);
			tak.erase(a[i]);
		}
	}

	
}