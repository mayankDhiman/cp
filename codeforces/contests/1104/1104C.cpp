using namespace std;
#include <bits/stdc++.h>
int main()
{
	string s; cin >> s;
	bool vach = 0, vacv = 0;
	for (auto c : s)
	{
		if (c == '1')
		{
			if (!vach)
			{
				cout << "4 1\n";
				vach = 1; 
			}
			else
			{	
				cout << "4 3\n";
				vach = 0;
			}
		}
		else 
		{
			if (!vacv)
			{
				cout << "1 4\n";
				vacv = 1;
			}
			else
			{
				cout << "3 4\n";
				vacv = 0;
			}
		}
	}
}