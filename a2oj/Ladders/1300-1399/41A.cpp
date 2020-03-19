using namespace std;
#include <bits/stdc++.h>
int main()
{
	string s1, s2;	cin >> s1 >>s2;
	bool ok = 1;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] != s2[s1.size() - 1 - i]){
			ok = 0;
			break;
		}
	}
	if (ok)	cout << "YES\n";
	else cout << "NO\n";
}