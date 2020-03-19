using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n; cin >> n;
	string a1, a2;
	int r1 = 0; 
	int r2 = 0;
	while (n --)
	{
		string t; cin >> t;
		if (t == a1 or a1 == "")
		{
			a1 = t;
			r1 += 1;
		}
		else if (t == a2 or a2 == "")
		{
			a2 = t;
			r2 += 1;
		}
	}
	if (r1 > r2)	cout << a1 << endl;
	else 	cout << a2 << endl;
	return 0;
}