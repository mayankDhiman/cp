#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;	cin >> n;
	vector <ll> a(n);
	for (ll i = 0; i < n; i ++){
		char x;	cin >> x;
		a[i] = x - 'a';
	}

	ll result = 0;
	for (ll c = *max_element(a.begin(), a.end()); c >= 0; c --){
		while (1)
		{
			bool ok = 1;
			for (ll i = 0; i < a.size(); i ++)
			{
				if (a[i] == c)
				{
					if (i == 0){
						if (a[i + 1] == c - 1){
							a.erase(a.begin() + i);
							ok = 0;
							result += 1;
							break;
						}
					}
					else if (i == a.size() - 1){
						if (a[i - 1] == c - 1){
							a.erase(a.begin() + i);
							ok = 0;
							result += 1;
							break;
						}
					}
					else{
						if (a[i + 1] == c - 1 || a[i - 1] == c - 1){
							a.erase(a.begin() + i);
							ok = 0;
							result += 1;
							break;
						}
					}
				}
			}

			if (ok)	break;
		}
		// cout << result << "\n";
		// for (auto R : a){
		// 	cout << char(R + 'a') << " ";
		// }	cout << "\n";
	}

	cout << result << "\n";
}