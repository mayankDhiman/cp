using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	string s; cin >> s; vector<char> a(s.begin(), s.end());
	sort(a.begin(), a.begin() + n);	sort(a.begin() + n, a.begin() + 2*n);
	bool up = 1;
	for (int i = 0; i < n; i++)
		if (a[i] >= a[i + n])
			up = 0;
	bool dwn = 1;
	for (int i = 0; i < n; i++)
		if (a[i] <= a[i + n])
			dwn = 0;	
	if (up or dwn)	
		cout << "YES\n";
	else
		cout << "NO\n";
}