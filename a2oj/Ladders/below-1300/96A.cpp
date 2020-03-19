using namespace std;

#include <bits/stdc++.h>

bool solve(string a)
{
	for (int i = 0; i <= a.size() - 7; i++)
	{		
		int t = 0;
		for (int j = i; j < i + 7; j ++)
			t += (a[j] - 48); 
		if (t == 7 or t == 0)
			return 1;
	}
	return 0;
}

int main()
{
	string a; cin >> a;
	if (a.size() < 7){
		cout << "NO" << endl;
		return 0;
	}
	if(solve(a))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	
}