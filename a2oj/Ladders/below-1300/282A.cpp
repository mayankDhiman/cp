using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n; cin >> n;
	int res = 0;
	while (n --)
	{
		string temp; cin >> temp;
		if (temp.find("+") != string::npos)		res += 1;
		else if (temp.find("-") != string::npos)		res -= 1;
	}
	cout << res << endl;
}