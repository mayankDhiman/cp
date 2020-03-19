using namespace std;

#include <bits/stdc++.h>
int main()
{
	string a; cin >> a;
	string x = "hello";
	int pos = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == x[pos])
			pos += 1;
	}
	if (pos == x.size())	cout << "YES" << endl;
	else cout << "NO" << endl;
}