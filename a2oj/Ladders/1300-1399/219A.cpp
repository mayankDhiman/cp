#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;	cin >> n;
	string s;	cin  >> s;
	int cnt[26];
	for (int i = 0; i < 26; i++)	cnt[i] = 0;

	for (int i = 0; i < s.size(); i++)
		cnt[s[i] - 97] += 1;

	for (int i = 0; i < 26; i ++)
	{
		if c(nt[i] % n != 0)
		{
			cout << -1 << "\n";
			return 0;
		}
	}

	string ans;
	for(int i = 0; i < 26; i++)
	{
		int t = cnt[i]/n;
		while(t--)
			ans += char(i + 97);
	}

	while(n--)
		cout << ans;
	cout << "\n";
}