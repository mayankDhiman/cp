using namespace std;
#include <bits/stdc++.h>
int main()
{
	string s;	cin >> s;
	stack<char> prev;	int res = 0;	
	for (auto ch : s)
	{
		if (prev.size() != 0 && ch == prev.top())
		{
			prev.pop();	res += 1;
		}
		else
			prev.push(ch);
	}
	if (res&1)
		cout << "Yes\n";
	else
		cout << "No\n";	
}