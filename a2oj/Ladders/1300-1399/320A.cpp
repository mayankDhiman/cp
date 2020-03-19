using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	string a;	cin >> a;	a += "  ";
	bool ok = 1;	ll n = a.size();
	ll i;
	for (i = 0; i < n; )
	{
		if (a[i] == '1' && a[i + 1] == '4' && a[i + 2] == '4'){
			i += 3;
		}
		else if (a[i] == '1' && a[i + 1] == '4'){
			i += 2;
		}
		else if (a[i] == '1'){
			i += 1;
		}
		else{
			ok = 0;
			break;
		}
	}

	if (ok)	cout << "YES\n";
	else cout << "NO\n";	
}