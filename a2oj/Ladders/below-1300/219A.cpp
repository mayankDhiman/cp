using namespace std;

#include <bits/stdc++.h>

int main()
{
	int k; cin >> k;
	string a; cin >> a;
	int count[26] = {0};
	for (auto i : a)
		count[i -'a'] += 1;
	for (int i = 0; i < 26; i += 1)
	{
		if (count[i] % k != 0)
		{
			cout << -1 << endl;
			return 0;
		}

	}
	for (int i = 0; i < k; i ++)
	{
		for (int j = 0; j < 26; j ++)
		{
			int t = count[j] / k;
			while (t --)
				cout << char(j + 'a');
		}
	}
	return 0;		
}