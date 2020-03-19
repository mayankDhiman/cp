using namespace std;

#include <bits/stdc++.h>
int main()
{
	string s; cin >> s;
	while (s.find("WUB") != string::npos)
		s.replace(s.find("WUB"), 3, " ");
	string res;
	unique_copy(s.begin(), s.end(), back_insert_iterator<string> (res), [](char a, char b){return isspace(a) && isspace(b);});
	if (res[0] == ' ')
		res = res.substr(1, res.size());
	if (res[res.size() - 1] == ' ')
		res = res.substr(0, res.size() - 1);
	cout << res << endl;
}