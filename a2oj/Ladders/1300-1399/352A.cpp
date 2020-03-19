using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	int c1 = 0, c2 = 0;

	while(n--){
		int t;	cin >> t;
		if (t == 0)	c1 += 1;
		else	c2 += 1;
	}
	
	if (c1 == 0){
		cout << "-1\n";
		return 0;
	}

	int t = c2 - c2%9;
	while(t--)
		cout << "5";

	if (c2 < 9){
		cout << "0\n";
		return 0;
	}

	while(c1--)
		cout << "0";
	cout << "\n";

	return 0;
}