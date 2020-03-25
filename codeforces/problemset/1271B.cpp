#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;	cin >> n;
	vector <ll> a(n);		
	for (ll i = 0; i < n; i ++){
		char x;	cin >> x;
		if (x == 'B')	a[i] = 1;	else	a[i] = 0;
	}	
	vector <ll> aa = a;

	vector <ll> r1;	ll pr = 1;
	for (ll i = 0; i < n - 1; i ++){
		if (a[i] != pr){
			r1.push_back(i + 1);
			a[i] = abs(1 - a[i]);
			a[i + 1] = abs(1 - a[i + 1]);
		}
	}
	if (a[n - 1] == pr){
		cout << r1.size() << "\n";
		for (auto i : r1)	cout << i << " ";	cout << "\n";
		return 0;
	}

	r1.clear();	pr = 0;
	for (ll i = 0; i < n - 1; i ++){
		if (aa[i] != pr){
			r1.push_back(i + 1);
			aa[i] = abs(1 - aa[i]);
			aa[i + 1] = abs(1 - aa[i + 1]);
		}
	}
	if (aa[n - 1] == pr){
		cout << r1.size() << "\n";
		for (auto i : r1)	cout << i << " ";	cout << "\n";
		return 0;
	}

	cout << "-1\n";


}

// BWB

// WBB
