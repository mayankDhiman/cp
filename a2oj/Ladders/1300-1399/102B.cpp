#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s; cin >> s;	

	int cnt = 0;
	while(s.size() > 1)
	{
		long long t = 0;
		for (long long i = 0; i < s.size(); i ++)
			t += s[i] - '0';
		s = to_string(t);
		cnt += 1;
	}

	cout << cnt << "\n";
}