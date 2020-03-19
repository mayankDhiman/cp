using namespace std;
#include <bits/stdc++.h>
int main()
{
	string a;	cin >> a;
	bool ok = 0;
	for (int i = 0; i < a.size() - 1; i++)
	{	
		if (a[i] == '0' and ok == 0)
		{
			ok = 1;
			continue;
		}
		cout << a[i];
	
}	// cout << "\n"<< ok;
	if (ok)	cout << a[a.size() - 1] << "\n";
}