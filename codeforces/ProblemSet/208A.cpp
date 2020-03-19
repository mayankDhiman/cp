#include <bits/stdc++.h>

using namespace std;

string solve(string a){
	size_t pos = string :: npos;
	while(a.find("WUB") != string :: npos){
		a.replace(a.find("WUB"), int(3), " ");
	}

	while(!a.empty() && isspace(*a.begin()))
		a.erase(a.begin());

	while(!a.empty() && isspace(*a.rbegin()))
		a.erase(a.end() - 1);

	return a;	
}

int main()
{
	string a;	cin >> a;
	string ans = solve(a);
	cout << ans << "\n";
}