using namespace std;
#define ll long long
#include <bits/stdc++.h>
int main()
{
	string a; cin >> a;
	ll i = 0;
	a += '7'; a += '7';
	// cout << a << endl;
	bool f = true;
	while (i < a.size() - 2)
	{
		if (a[i] ==  '1' && a[i + 1] != '4')
			i += 1;
		else if (a[i] == '1' && a[i + 1] == '4' && a[i + 2] != '4')
			i += 2;
		else if (a[i] == '1' && a[i + 1] == '4' && a[i + 2] == '4')
			i += 3;
		else if (a[i] != '1')
			{
				f = false;
				break;
			}	 
	}
	if (f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}