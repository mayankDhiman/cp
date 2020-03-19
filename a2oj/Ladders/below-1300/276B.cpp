using namespace std;

#include <bits/stdc++.h>
int main()
{
	string a; cin >> a;
	map<char, int> cnt;
	for (int i = 0; i < a.size(); i++)
		cnt[a[i]] += 1;
	int cntOdd = 0;
	for (auto i = cnt.begin(); i != cnt.end(); i++)
		if (i->second % 2 == 1)
			cntOdd += 1;
	if (cntOdd == 0 or cntOdd == 1 or cntOdd % 2 == 1)
		cout << "First" << endl;
	else if (cntOdd % 2 == 0)
		cout << "Second" << endl;		
	return 0;

}