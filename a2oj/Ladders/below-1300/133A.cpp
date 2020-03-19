using namespace std;

#include <bits/stdc++.h>
int main()
{
	string a; cin >> a;
	if (a.find("H") != string::npos or a.find("Q") != string::npos or a.find("9") != string::npos)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;			
}