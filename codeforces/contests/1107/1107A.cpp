using namespace std;
#include <bits/stdc++.h>
int main()
{
	int q; cin >> q;
	for (int Q = 0; Q < q; Q++)
	{
		int n; cin >> n;
		string s; cin >> s;
		if (n == 2 && s[0] >= s[1])
		{
			cout << ("NO\n");
			continue;
		}
		else
		{
			cout << ("YES\n2\n");
			cout << s[0] << " ";
			for (int i = 1; i < s.size(); i++)
				cout << s[i];
			cout << "\n";
		}

	}
	return 0;
}
