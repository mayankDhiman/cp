using namespace std;

#include <bits/stdc++.h>
int main()
{
	map <char, int> count;
	string a; cin >> a;
	for (int i = 0; i < a.size(); i++) 
		count[a[i]] += 1;
	int res = 0;
	for (auto i : count)
		res += 1;
	if (res % 2 == 1)
		cout << "IGNORE HIM!";
	else 
		cout << "CHAT WITH HER!";
	return 0;
}