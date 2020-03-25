#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;	cin >> a;

	int loc1 = a.find("AB");
	int loc2 = a.rfind("BA");

	if (loc1 != -1 && loc2 != -1 && loc2 > loc1 + 1){
		cout << "YES\n";
		return 0;
	}

	loc1 = a.find("BA");
	loc2 = a.rfind("AB");
	if (loc1 != -1 && loc2 != -1 && loc2 > loc1 + 1){
		cout << "YES\n";
		return 0;
	}


	cout << "NO\n";
	return 0;
}

