using namespace std;
#include <bits/stdc++.h>
int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);
	int T;	cin >> T;
	while(T--)
	{
		int n;	cin >> n;
		bool fin[26];	memset(fin, true, sizeof(fin));
		for (int i = 0; i < n; i++)
		{
			bool tem[26];	memset(tem, false, sizeof(tem));
			string s;	cin >> s;
			for (auto c : s)
				if (fin[c - 'a'])
					tem[c - 'a'] = 1;
			memcpy(fin, tem, 26);	
		}
		cout << accumulate(fin, fin + 26, 0) << endl;
	}
}